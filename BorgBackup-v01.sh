#!/bin/bash

# Commands done before run this script
# borg init --encryption=repokey /ruta/al/repo     -> choose password and password added to file "~/.config/borg/borg-passphrase". File with r-x------

export BORG_PASSCOMMAND="cat /home/mic/.config/borg/borg-passphrase"

# Path to Harddisk where the Borg Repo is stored.
#backupdisk="/mnt/BackupDisc1TB"
backupdisk=$(df -h | grep /dev/sdd1 | awk '{print $6}')
echo $backupdisk
borgrepo=$backupdisk"/BorgRepo"
compress="lzma,9"
folders="/home/mic/IT/ /home/mic/pro/ /home/mic/Courses/"
time_t=$(date +'%H-%M_%d%m%Y')
backup_name="dataBackup_"$time_t

# Check free space from harddisk for Backups in % -> give back % of diskusage of Backupdisk as a number. 
# If usage higher then 90%, Backup will not be startet.   
disk_usage=$(df -h | grep $backupdisk | awk '{print $5}' | sed 's/\%//g')
if [ $disk_usage -gt 90 ]
then
	echo "[ERROR!] Disk usage of "$backupdisk" up to "$disk_usage"%. Backup not startet."
	echo "ERROR! Borg backup not startet. Usage of Harddisk "$backupdisk" up to "$disk_usage"%." | systemd-cat -p emerg
        exit
else
	echo "Borg Backup startet. [ "$backup_name" ]"
fi	



# Start Borg Backup using variables  | keep out -n for stop running dry-run
borg create -C $compress  -n --stats -p $borgrepo::$backup_name $folders

# check the return value of the borg command and throw error if needed.
return_value=$?
if [[ $return_value -eq 0 ]]; then		
	echo "Borg backup [ "$backup_name" ] finshed sussessfully!" | systemd-cat -p info
elif [[ $return_value -eq 1 ]]; then 
	echo "WARNING! Borg backup [ "$backup_name" ]. No such file or directory to backup!" | systemd-cat -p warning
elif [[ $return_value -eq 2 ]]; then 
	echo "ERROR! Borg backup [ "$backup_name" ] with error!" | systemd-cat -p emerg
elif [[ $return_value -eq 3 ]]; then 
	echo "ERROR! Borg backup [ "$backup_name" ] not startet. Repository is locked!" | systemd-cat -p emerg
elif [[ $return_value -eq 4 ]]; then 
	echo "ERROR! Borg backup [ "$backup_name" ] with error! ssh connection error. Returnd value 255." | systemd-cat -p emerg
elif [[ $return_value -eq 5 ]]; then 
	echo "ERRROR! Borg backup [ "$backup_name" ]. No space left on device "$backupdisk". Disk usage "$disk_usage"%." | systemd-cat -p emerg
else
	echo "ERROR! Borg backup [ "$backup_name" ] not realized. Motive not known!" | systemd-cat -p emerg
fi



# Prune - safe all in the last week, safe one from last week, once a month and one a year.
borg prune -v --list --keep-with=1w --keep-daily=7  --keep-monthly=12 --keep-yearly=100 $borgrepo

# Recover disk space by compacting the segment files in the repo:
borg compact $borgrepo   





# send an email with borg info about a resume and last backup
# borg info $borgrepo   
#

echo "Finish"

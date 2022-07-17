#import <stdio.h>


int main(){
   char a, b, c;
   printf("1. Buchstabe : ");
   do {scanf("%c",&a);} while ( getchar() != '\n' );
   printf("2. Buchstabe : ");
   do {scanf("%c",&b);} while ( getchar() != '\n' );
   printf("3. Buchstabe : ");
   do {scanf("%c",&c);} while ( getchar() != '\n' );



   /*
   char a,b,c;
   printf("1. Buchstabe : ");
   scanf("%c",&a);
   fflush(stdin);
   printf("2. Buchstabe : ");
   scanf("%c",&b);
   fflush(stdin);
   printf("3. Buchstabe : ");
   scanf("%c",&c);
   */
   printf("%c %c %c\n", a, b, c);


   return 0;

}

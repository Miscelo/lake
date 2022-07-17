#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

#define ARR_SZ 1024
#define _TOSTR(a) #a
#define TOSTR(a) _TOSTR(a)

int main()
{
    clock_t begin = clock();
    FILE *f = fopen("ctext.txt", "r");
    if (f == NULL) {
        fprintf(stderr, "error opening the file\n");
        return 1;
    }

    char longest_word[ARR_SZ];  // Assuming there is no word longer than 1024.
    int longest_sz = 0;

    for (;;) {
        char temp_word[ARR_SZ+1];  // scanf is a pain...
        int temp_sz;
        int ret = fscanf(f, "%" TOSTR(ARR_SZ) "s%n", temp_word, &temp_sz);
        if (ret != 1 || feof(f)) {
            break;
        }

        if (temp_sz >= ARR_SZ - 1) {
            fprintf(
                stderr,
                "oops, words are too long, make the arrays larger\n");
            return 1;
        }

        if (temp_sz > longest_sz) {
            longest_sz = temp_sz;
            strcpy(longest_word, temp_word);
            printf("found a new longest word: %s\n", temp_word);
        }
    }

    printf("longest word: %s\n", longest_word);
    printf("longest word size: %i\n", longest_sz);

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  	printf("%lf", time_spent);
    return 0;
}

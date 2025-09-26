#include "name_length.h"
#include <stdio.h>

void letter_count(char *name){
    int count = 0;

    for(int i=0; name[i]!='\0'; i++){
        if (name[i]!=' ') count++;
    }

    printf("The number of letters of your name (no space): %d\n", count);
}
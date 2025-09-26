#include "name_reverse.h"
#include "name_length.h"
#include <stdio.h>

/*void letter_count(char *name){
    int count = 0;

    for(int i=0; name[i]!='\0'; i++){
        if (name[i]!=' ') count++;
    }

    printf("The number of letters of your name (no space): %d\n", count);
} */

int main(){
    char myName[30] = "Amirlan Enkhtur";

    letter_count(myName);
    reverse_order(myName);
    letter_count(myName);
    return 0;
}
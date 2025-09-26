#include "name_reverse.h"
#include <stdio.h>

void reverse_order(char *name){
    int FNameIndex = 0, LNameIndex, index1=0, index2=0;
    char reversedname[30];

    while(name[FNameIndex]!=' '){
        FNameIndex++;
    }

    LNameIndex = FNameIndex+1;

    while(name[LNameIndex]!='\0'){
        reversedname[index1] = name[LNameIndex];
        LNameIndex++;
        index1++;
    }

    reversedname[index1] = ' ';
    index1++;

    while(index2<FNameIndex){
        reversedname[index1] = name[index2];
        index1++;
        index2++;
    }

    printf("The reversed name is: %s\n", reversedname);

}
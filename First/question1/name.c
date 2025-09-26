#include "name_reverse.h"
#include "name_length.h"
#include <stdio.h>

int main(){
    char myName[30] = "Amirlan Enkhtur";

    letter_count(myName);
    reverse_order(myName);

    return 0;
}
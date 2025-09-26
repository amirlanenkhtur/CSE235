#include <stdio.h>

struct state{
    char name[20];
    int letter_count;
};

int GetLength(char *str);

void BubbleSort(struct state *list, int size);

int BinarySearch(struct state *list, int size, int key);

int main(){
    int index=0, value;
    struct state ListOfState[10];

    while(index<10){
        printf("Enter your state name. %d: ", index+1);
        scanf("%19s", ListOfState[index].name);
        ListOfState[index].letter_count = GetLength(ListOfState[index].name);
        index++;
    }

    BubbleSort(ListOfState, 10);

    value = BinarySearch(ListOfState, 10, 8);

    if (value!= (-1)) printf("\nFound at least 1 state with length 8, in position %d, and the state name: %s", value+1, ListOfState[value].name);
    else printf("\nNo state with length 8.");
    return 0;
}

int GetLength(char *str){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }

    return count;
}

void BubbleSort(struct state *list, int size){
    struct state temp;
    struct state *end = list + size;

    for(struct state *i=list; i<end-1; i++){
        for (struct state *j=(i+1); j<end; j++){
            if (i->letter_count>j->letter_count){
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int BinarySearch(struct state *list, int size, int key){
    int low = 0, high = size-1, mid;

    while(low<=high){
        mid = (low+high)/2;

        if (list[mid].letter_count == key) return mid;
        else if (list[mid].letter_count < key) low = mid + 1;
        else high = mid - 1;
    }
    return (-1);
}
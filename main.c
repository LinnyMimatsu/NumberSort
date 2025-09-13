/*
 * Name: Dom
 * Description: Reads in a set amount of numbers given by the user and prints them in the original order
 * and the sorted order
 * Date: 09/13/25
 */
#include <stdio.h>
#include <stdlib.h>

int arrSize();
void userArr(int arrSize);

int main(void) {

    int size = arrSize();

    userArr(size);

    return 0;
}


int arrSize() {
    int arrSize;

    printf("Enter number of elements: ");
    scanf("%d", &arrSize);

    return arrSize;
}

void userArr(int arrSize) {

    int* ptr = (int* ) calloc(arrSize, sizeof(int));

    for (int i = 0; i < arrSize; i++) {

        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr[i]);

    }

    for (int i = 0; i < arrSize; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

}
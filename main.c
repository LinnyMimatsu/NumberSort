/*
 * Name: Dom
 * Description: Reads in a set amount of numbers given by the user and prints them in the original order
 * and the sorted order
 * Date: 09/13/25
 */
#include <stdio.h>
#include <stdlib.h>


/*Function declaration*/
int arrSize();
void bubbleSort(int arr[], int arrSize);
void userArr(int arrSize);


/*running functions in main*/
int main(void) {

    int size = arrSize();

    userArr(size);

    return 0;
}


/*Grabs the array size from the user*/
int arrSize() {
    int arrSize;

    printf("Enter number of elements: ");
    scanf("%d", &arrSize);

    return arrSize;
}


/*Bubble sort algorithm*/
void bubbleSort(int arr[], int arrSize) {

    for (int i = 0; i < arrSize - 1; i++) {
    for (int j = 0; j < arrSize - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {

            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;

            }
        }
    }
}


/*
 *fills the array with user inputted numbers and displays them
 * sorted and unsorted
 */
void userArr(int arrSize) {

    int* arr = (int* ) calloc(arrSize, sizeof(int));

    for (int i = 0; i < arrSize; i++) {

        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);

    }

    printf("Unsorted:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, arrSize);

    printf("\nSorted:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

}
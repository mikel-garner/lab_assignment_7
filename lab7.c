//author: Mikel Garner
#include <stdio.h>

int main(void){

    //ask for two 8-int arrays
    int arr1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72}, arr2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10}, swaps1[9] = {0}, swaps2[9] = {0};

    //selection sort
    int minIndex, n = 9, swaps = 0, temp;

    //swap first element in array with minimum element in arr1
    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr1[j] < arr1[minIndex])
            {
                minIndex = j;
            }
        }
        if (i != minIndex){ //assures swap is needed

            //increment swap counter
            swaps1[i]+=1;
            swaps1[minIndex]+=1;
            swaps++;

            //swap arr[i] (first value) and arr[minIndex] (lowest value)
            temp = arr1[i];
            arr1[i] = arr1[minIndex];
            arr1[minIndex] = temp;
        }
    }
    //display how much each number was swapped in arr1
    printf("array 1 selection sort swaps: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d: %d\n", arr1[i], swaps1[i]);
    }
    printf("total swaps: %d\n", swaps);

    //selection sort for arr2
    swaps = 0;

    for (int i = 0; i < n-1; i++)
    {
        minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr2[j] < arr2[minIndex])
            {
                minIndex = j;
            }
        }
        if (i != minIndex){ //assures swap is needed

            //increment swap counter
            swaps2[i]+=1;
            swaps2[minIndex]+=1;
            swaps++;

            //swap arr[i] (first value) and arr[minIndex] (lowest value)
            temp = arr2[i];
            arr2[i] = arr2[minIndex];
            arr2[minIndex] = temp;
        }
    }
    //display how much each number was swapped in arr1
    printf("array 2 selection sort swaps: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d: %d\n", arr2[i], swaps2[i]);
    }
    printf("total swaps: %d\n", swaps);

    //reset swap counter
    for(int i = 0; i < n; i++){
        swaps1[i] = 0;
        swaps2[i] = 0;
    }

    //bubble sort

    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {

                swaps1[j]++; // Increment swaps for the swapped element
                swaps1[j + 1]++; // Increment swaps for the swapped element
                swaps++;

                // Swap elements
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    printf("array 1 bubble sort swaps: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d: %d\n", arr1[i], swaps1[i]);
    }
    printf("total swaps: %d\n", swaps);

    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {

                swaps2[j]++; // Increment swaps for the swapped element
                swaps2[j + 1]++; // Increment swaps for the swapped element
                swaps++;

                // Swap elements
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;

            }
        }
    }
    printf("array 2 bubble sort swaps: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d: %d\n", arr2[i], swaps2[i]);
    }
    printf("total swaps: %d\n", swaps);

    return 0;
}

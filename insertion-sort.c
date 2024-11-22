#include<stdio.h>

int insertionSort(int arr[], int size){
       // start from second element 
        for(int i = 1; i < size ; i++){
         int key = arr[i];
         int j = i - 1;
         //j is first value and key is second valu 
         // if grater than key to one position to 
         //the right of their current position
         while(j >= 0 && arr[j] > key){
             arr[j + 1] = arr[j];
             j = j - 1;
         }
         //move key to the current porisition
         arr[j + 1] = key;
        }
       
}

int main(){
    int arr[] = {5, 12, 11, 19, 13, 6, 7};
    //Find the size of array 
    int n = sizeof(arr)/sizeof(arr[0]);
    //print unsorted array 
    printf("Original array:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //call function for merge 
    insertionSort(arr, n);
    printf("insertion use to marge array are, \n");
    for (int i; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
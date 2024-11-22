#include <stdio.h>
//swap algorithm 
int swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int bubbleSort(int arr[], int n){
    //loop for array
 for(int i = 0; i < n-1; i++){
     //i is already in so the loop will only num n-i-1
     for(int j = 0; j < n - i - 1; j++){
         //compare left to right which one is greater than
         if(arr[j] > arr[j + 1]){
             //call swap algorithm
             swap(arr, j, j + 1);
         }
     }
 }    
}

int main() {
    int arr[] = {1, 5, 6, 8, 2, 0, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int j; j < n; j++){
        printf("%d ", arr[j]);
    }

    return 0;
}
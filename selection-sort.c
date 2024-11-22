#include<stdio.h>
int swap(int* arr ,int min,int i ){
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
}
int selectionSort(int arr[], int size){
        // Start with the whole array as unsored and one by
      // one move boundary of unsorted subarray towards right
        for(int i = 0; i < size - 1; i++){
            // Find the minimum element in unsorted array
            int min_idx = i;
            for(int j = i+1; j < size; j++){
                if(arr[j] < arr[min_idx])
                min_idx = j;
            }
            //call the swap function to swap min grater
             swap(arr, min_idx, i);
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
    selectionSort(arr, n);
    printf("merge array are \n");
    for (int i; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
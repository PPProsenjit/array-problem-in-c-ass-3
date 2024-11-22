// Online C compiler to run C program online
#include <stdio.h>
//swap algorithm
int swap(int* arr,int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int findLargest(int arr[], int n){
    //check 0 - 9 value 
    for(int i; i < n -1; i++){
        
        for(int j = 0; j < n - i - 1; j++ ){
            //compare the largest element 
            if(arr[j] < arr[j+1]){
                //call for swap 
                 swap(arr, j, j + 1 );
            }
        }
       
    }
    return arr[4];
    
}

int main() {
    int arr[10] = {10, 50, 25, 23, 5, 15, 86, 55, 10, 2};
    int n = 10;
  
    int result = findLargest(arr, n);
    printf(" The 5th largest element is: %d\n", result);
    
    
    return 0;
}
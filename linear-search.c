#include<stdio.h>

int linearSearch(int arr[], int size, int key){
    //loop for checking 
      for(int i = 0; i < size; i++){
          //if key is eaula than return index number
          if(arr[i] == key){
              return i;
          }
      }
      //if don't find than return index -1
      return -1;
       
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
    
    
    int key ;
    printf("Inter the search value: ");
    scanf("%d", &key);
    //call function for merge 
    int result = linearSearch(arr,n, key);
    if(result == -1){
        printf("Element is not in the array list.");
    }
    else 
    printf("Element is present in the list index is %d", result);
    return 0;
}
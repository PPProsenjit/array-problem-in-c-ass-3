#include<stdio.h>
int binarySearch(int arr[], int left, int right, int key){
     //this loop in continue for left > right 
while(left < right){
    //Find the mid value 
    int mid = left + (right-left)/2;
      //check the midle number is equal or for target key 
        //if it's than return midle point is target pont 
    if (arr[mid] == key){
        return mid;
    }
      //else it's check midle value is less than from target value 
        //if iit's true than left = mid + 1
        // check all left value from midle and continue process again
    else if (arr[mid] < key){
        left = mid + 1;
    }
          // if midle is greater than key value than take right = mid -1
        //take all right vale from midle vale and continue process again
    else {
        right = mid - 1 ;
    }
}
// If we reach here, then element was not present
return -1;
}


int main(){
    int arr[] = {1, 3, 4, 6, 23, 45, 47, 54, 67, 78, 87, 88, 90};
    //Find the size of array 
    int n = sizeof(arr)/sizeof(arr[0]);
    int key; 
    printf("Enter the key value :");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n-1, key);
    if(result == -1){
        printf("\n Element is not found in this array.");
    }
    else{
        printf("Element is found in this array. index is %d", result);
    }
    return 0;
}
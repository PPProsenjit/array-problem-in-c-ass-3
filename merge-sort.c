#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right -mid;
    //create temporary arrays 
    int lArr[n1], rArr[n2];
    
    // copy da to temporary arrays 
    for (i = 0; i < n1; i++){
        lArr[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++){
        rArr[j] = arr[mid + 1 + j];
    }
    
    ///merge the temporary arrays back into array [left ......right]
    i = 0, j = 0, k = left;
    while(i < n1 && j < n2 ){
    if (lArr[i] <= rArr[j]){
        arr[k] =lArr[i];
        i++;
    }
    else 
    {
        arr[k] = rArr[j];
        j++;
    }
    k++;
}
//when copy remaining of left array 
    while(i < n1){
        arr[k] = lArr[i];
        i++;
        k++;
    }

    // when copy remaining of right array 
    while(j < n2){
        arr[k] = rArr[j];
        j++;
        k++;
    }

}

//subarray to be sorted is in the index range [left - right]
void mergeSort(int arr[], int left, int right){
    if (left < right){
        //find the mid value
        int mid = left + (right-left)/2;
        //short first and 2nd halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        
        merge(arr, left, mid, right );
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
    mergeSort(arr, 0, n - 1);
    printf("marge array are \n");
    for (int i; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
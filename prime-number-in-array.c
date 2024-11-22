
#include <stdio.h>
int prime(int arr){
    //
    if( arr <= 1){
        return 0;
    }
    // found prime number index 2
    //checking it's prime or not 
    for(int i = 2; i <= arr/2; i++){
        if(arr % i == 0)
        return 0;
    }
    return 1;
    
}

int main() {
    int arr[100], n ;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Input The array Elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    
    printf("Prime number of array are:\n");
    for(int i = 0; i < n; i++){
        if(prime(arr[i])){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
// define means public use 
#define row1 2
#define col1 2
#define row2 2
#define col2 3

void multiplyMatrix(int m1[][col1],int m2[][col2]){
   
    int result[row1][col2];
    
    printf("Result Matrix is: \n");
    
    //found row and selected
    for(int i = 0; i < row1; i++ ){
        
        //found how many columns
        for(int j = 0; j < col2; j++){
            
            result[i][j] = 0;
            
            //multiply row1 * col1 row2 * col2 
            for(int k = 0; k < row2; k++){
                
                result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
         printf("\n");
    }
   
}

int main() {
   
    int m1[row1][col1] = {{4, 5},{3, 1}};
    int m2[row2][col2] = {{2, 3, 5 },{3, 4, 1}};
    
    if(col1 != row2){
        printf("The number of columns in Matrix-1 must be equal to the number of wor\n");
        printf("Please update MACROs value according \n");
        exit(EXIT_FAILURE);
    }
    //function call
    multiplyMatrix(m1, m2);
    return 0;
}
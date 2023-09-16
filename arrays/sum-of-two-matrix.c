#include <stdio.h>
#define COLUMN 3
#define ROW 3

int main() {
    int arr1 [COLUMN] [ROW],arr2 [COLUMN] [ROW], ansarr [COLUMN] [ROW];
    int i, j, sum=0;
    //input the elements of matrix 1 
    printf("enter the elements for first matrix \n");
    for (i=0; i<COLUMN;i++){
        for(j=0; j<ROW ;j++){
            printf("enter the %d, %d element : ", i+1,j+1 );
            scanf("%d", &arr1[i][j]);
        }
    }
     //input the elements of matrix 2 
        printf("enter the elements for second matrix \n");
    for (i=0; i<COLUMN;i++){
        for(j=0; j<ROW ;j++){
            printf("enter the %d, %d element : ", i+1,j+1 );
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // adding those matrix
        for (i=0; i<COLUMN;i++){
        for(j=0; j<ROW ;j++){
                ansarr [i][j]= arr1[i][j]+arr2[i][j];
        }
    }
    //printing the answer array
    printf("the resultant matrix from the sum of the above matrixes is : \n");
    for (i=0; i<COLUMN;i++){
        printf("\n");
        for(j=0; j<ROW ;j++){
            printf("%d  ", ansarr[i][j]);
        }
    }
    return 0;
}
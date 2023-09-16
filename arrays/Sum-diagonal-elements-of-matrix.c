#include <stdio.h>
#define COLUMN 3
#define ROW 3

int main() {
    int arr [COLUMN] [ROW];
    int i, j, sum=0;
    for (i=0; i<COLUMN;i++){
        for(j=0; j<ROW ;j++){
            printf("enter the %d, %d element : ", i+1,j+1 );
            scanf("%d", &arr[i][j]);
        }
    }
    
    //loop to check for the diagonal element and make their sum
        for (i=0; i<COLUMN;i++){
        for(j=0; j<ROW ;j++){
            if(i == j ){
                sum+= arr[i][j];
            }
        }
    }
    printf("the sum of the digonal elements is %d ", sum);
    
    return 0;
}
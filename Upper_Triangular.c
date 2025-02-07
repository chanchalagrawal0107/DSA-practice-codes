#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter the elements of the matrix: ");
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 1; i<n; i++){
        for(j = 0; j<i; j++){
            if(A[i][j] != 0){
                printf("Not upper Triangular");
            }
            else{
                printf("Upper Triangular");
            }
        }
    }
    return 0;
}


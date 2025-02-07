#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the matrix: ");
    scanf("%d", &n);

    int A[n][n];
    printf("Enter the elements of the matrix: ");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
            if(A[i][j] == 0){
                printf("lower triangular");
                break;
            }
            else{
                printf("not Lower triangular");
            }
        }
    }
    return 0;
}
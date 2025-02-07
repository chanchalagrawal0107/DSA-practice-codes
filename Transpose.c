#include<stdio.h>
int main(){
    int m,n,i,j;
    
    printf("Enter the values of m, n: ");
    scanf("%d %d", &m,&n);

    int A[m][n], transpose[n][m];
    printf("Enter the elements of A: ");
    for(i = 0;i<m;i++){
        for(j = 0; j< n ; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0;i<m;i++){
        for(j = 0; j< n ; j++){
            transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose of the matrix is:\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d\t", transpose[i][j]);

        }
        printf("\n");
    }

    return 0;
}

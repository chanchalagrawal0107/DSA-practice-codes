#include<stdio.h>
int main(){
    int m,n,p,q,i,j,k;
    
    printf("Enter the values of m, n");
    scanf("%d %d", &m,&n);

    printf("Enter the values of p and q:");
    scanf("%d %d", &p, &q);

    if(n!=p){
        printf("Matrix not multiplicable");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    for(i =0; i<m ; i++){
        for(j = 0; j<q; j++){
            C[i][j] = 0;
        }
    }
    printf("Enter the elements of matrix A\n:");
    for( i = 0;i<m;i++){
        for( j = 0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of matrix B\n:");
    for( i = 0;i<p;i++){
        for( j = 0; j<q; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for( i = 0;i<m;i++){
        for(int j = 0; j<q; j++){
            for( k = 0; k<n; k++){
                C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
            }
        }

    }
        
    printf("Matrix after multiplication is:\n");
    for( i = 0;i<m;i++){
        for( j = 0; j<q; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}




    

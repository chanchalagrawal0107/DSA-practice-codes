#include<stdio.h>

void printArray(int *A, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

}

void selectionsort(int *A, int n){
    int index_of_min, temp;
    for(int i = 0; i<n-1; i++){
        index_of_min = i;
        for(int j = i+1; j<n; j++){
            if(A[j] < A[index_of_min]){
                index_of_min = j;
            }
        }
        temp = A[i];
        A[i] = A[index_of_min];
        A[index_of_min] = temp;
    }


}
    int main(){

        int A[] = {12, 54, 65, 7, 23, 9};       
        int n = 6;
        printArray(A, n);                       
        selectionsort(A, n);
        printArray(A, n);
        return 0;
    }
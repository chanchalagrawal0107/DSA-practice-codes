#include<stdio.h>

void printArray(int A[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

}

void insertionSort(int A[], int n){
    int curr, prev;
    for(int i = 1; i <= n - 1; i++){
        curr = A[i];  
        prev = i - 1;
        while(prev >= 0 && A[prev] > curr){
            A[prev+1] = A[prev];
            prev--;
        }
        A[prev+1] = curr;
    }
}

int main(){

    int A[] = {12, 54, 65, 7, 23, 9};       
    int n = 6;
    printArray(A, n);                       
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}
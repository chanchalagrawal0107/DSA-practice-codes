#include<stdio.h>
int main(){
    int arr[50], n, ind;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the index at which the element is to be deleted: ");
    scanf("%d", &ind);

    if(ind < 0 || ind > n){
        printf("Invalid index");
        return 0;
    }

    for(int i  = ind; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;

    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;

}
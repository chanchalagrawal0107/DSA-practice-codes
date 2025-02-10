#include<stdio.h>
int main(){
    int arr[50], n, ind, val;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the value and index at which the element is to be inserted: ");
    scanf("%d %d", &val, &ind);

    if(ind < 0 || ind > n){
        printf("Invalid index");
        return 0;
    }

    for(int i = n; i > ind; i--){
        arr[i] = arr[i - 1];
    }

    arr[ind] = val;
    n++;

    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }

    return 0;
    
}
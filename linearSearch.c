// #include <stdio.h>

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i;  
//         }
//     }
//     return -1;  
// }

// int main() {
//     int target,size;
//     printf("Enter the size of the array:");
//     scanf("%d", &size);
//     int arr[size];
//     // int size = sizeof(arr) / sizeof(arr[0]);  

//     printf("Enter the elements:");
//     for(int i =0;i<size;i++){
//         scanf("%d", &arr[i]);
//     }
    

//     printf("Enter the element to search: ");
//     scanf("%d", &target);

//     int result = linearSearch(arr, size, target);

//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found in the array\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n, x;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to be searched: ");
//     scanf("%d", &x);

//     for(int i = 0; i<n; i++){
//         if(arr[i] == x){
//             x = arr[i];
//             break;
//         }
//     }
//     printf("%d", x);
//     return 0;
// }


#include<stdio.h>
int main(){
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    for(int i = 0; i<n; i++){
        if(arr[i] == target){
        target = arr[i];
        break;
    }
    else{
        printf("Not found");
    }

}
    printf("Element found is: %d ", target);
    
}
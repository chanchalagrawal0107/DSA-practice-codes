// #include<stdio.h>
// int main(){
//     int n, target, low = 0, found = 0;
//     printf("Enter the size of the array: ");
//     scanf("%d", &n);

//     int arr[n];
//     int high = n-1;

//     printf("Enter the elements: ");
//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to be searched: ");
//     scanf("%d", &target);

//     while(low <= high){
//         int mid = (low + high)/2;
//         if(arr[mid] == target){
//             found = 1;
//             printf("Element found");
//             break;
//         }

//         else if(target < arr[mid]){
//             high = mid-1;
            
//         }

//         else if(target > arr[mid]){
//             low = mid + 1;

//         }
//         if(found == 1){
//             printf("Element found");
//         }
//         else{
//             printf("Not found");
//             break;
//         }
//     }

//     return 0;

// }


//Binary Search after sorting

#include<stdio.h>

void printarray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}

void bubble_sort(int arr[],int n){
    int temp;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int high, int low, int x){
    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == x)
            return mid;
        if(arr[mid] < x)
            low = mid+1;
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {67, 78, 34, 56, 23, 90};
    int n = 6;
    int x;
    
    bubble_sort(arr, n);
    printarray(arr, n);

    printf("Enter the element to search: ");
    scanf("%d", &x);

    int result = binary_search(arr, n-1, 0, x);
    if(result != -1)
        printf("%d %d", x, result);
    else
        printf("Not found");
    
    return 0;

}
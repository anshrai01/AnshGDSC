#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    
    // Traverse through all array elements
    for (i = 0; i < n; i++) {
        
        // Last i elements are already sorted
        for (j = 0; j < n-i-1; j++) {
            
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int n, int key) {
    int left = 0, right = n-1, mid;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n, key, i;
    printf("Enter value of n : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) {
        printf("Enter element for a[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter key element : ");
    scanf("%d", &key);
    
    bubble_sort(arr, n);
    
    printf("After sorting the elements in the array are\n");
    for (i = 0; i < n; i++) {
        printf("Value of a[%d] = %d\n", i, arr[i]);
    }
    
    int result = binary_search(arr, n, key);
    
    if (result == -1) {
        printf("The key element %d is not found in the array", key);
    }
    else {
        printf("The key element %d is found at the position %d", key, result+1);
    }
    
    return 0;
}

#include <stdio.h>

void reverse(int arr[], int start, int end) 
{
    while (start < end) 
    {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        
        start++;
        end--;
    }
}


void rotateArray(int arr[], int n, int size) 
{
   
    n = n % size;
    reverse(arr, 0, size - 1);
    reverse(arr, 0, n - 1);
    reverse(arr, n, size - 1);
}


void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    printf("Original array: ");
    printArray(arr, size);

    rotateArray(arr, n, size);

    printf("Array after rotating by %d positions: ", n);
    printArray(arr, size);

    return 0;
}
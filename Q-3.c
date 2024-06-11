#include<stdio.h>

void printReverseArray(int arr[], int size)
{
    printf("Reversed array: ");
    
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int calSum(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printReverseArray(arr, size);
    
    int sum = calSum(arr, size);
    
    printf("Sum of Array Elements: %d\n", sum);
    
}

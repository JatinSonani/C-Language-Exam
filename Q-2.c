#include<stdio.h>

int comSum(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int n;
    
    printf("Enter the number of Elements in the array: ");
    scanf("%d", &n);

    int myArray[n];
    
    printf("Enter %d Elements:\n", n);
    
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &myArray[i]);
    }

    int totalSum = comSum(myArray, n);
    
    printf("Sum of array Elements: %d\n", totalSum);

    
}

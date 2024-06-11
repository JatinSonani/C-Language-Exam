#include<stdio.h>

int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    int n;

    printf("Enter the number of elements in the Array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the Array:\n");
    
    for(int i = 0; i < n; i++) 
	{
        scanf("%d", &array[i]);
    }

    int cubeArray[n];

    for(int i = 0; i < n; i++)
	{
        cubeArray[i] = cube(array[i]);
    }

    printf("Original array and their Cubes:\n");
    
    for(int i = 0; i < n; i++) 
	{
        printf("Element: %d, Cube: %d\n", array[i], cubeArray[i]);
    }    
}

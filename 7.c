#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    float average;
 
    // Input size of array from the user
    printf("Enter size of array: ");
    scanf("%d", &n);
 
    int arr[n];
 
    // Input elements in array from the user
    printf("Enter elements in array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // Keep adding each element to the sum
        sum = sum + arr[i];
    }
 
    // Calculate the average by dividing sum by number of elements
    average = (float)sum / n;
 
    // Display the average value to the user with 2 decimal places
    printf("Average value in array: %.2f", average);
 
    // Return 0 to indicate successful execution of the program
    return 0;
}

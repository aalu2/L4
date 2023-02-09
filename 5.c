#include<stdio.h> 

// Function to find the maximum value in an array
int findMaximum(int inputArray[], int arraySize) 
{ 
	int maxValue = inputArray[0]; // Initialize the max value with the first element of the array

	// Loop through the array starting from the second element
	for (int i = 1; i < arraySize; i++) 
	{
		// If the current element is greater than the max value
		if (inputArray[i] > maxValue) 
		{
			// Update the max value with the current element
			maxValue = inputArray[i]; 
		}
	}

	// Return the final max value
	return maxValue; 
} 

// Driver program to test the above function
int main() 
{ 
	int inputArray[5]; // Declare an array to store the input values
	printf("Enter elements for array: ");
	
	// Loop to read the input values
	for(int i=0; i<5; i++)
	{
		// Read a value and store it in the array
		scanf("%d", &inputArray[i]); 
	}

	int arraySize = sizeof(inputArray)/sizeof(inputArray[0]); // Calculate the size of the array
	
	int maxNum = findMaximum(inputArray, arraySize); // Call the function to find the maximum value
	
	// Print the maximum value
	printf("maximum number = %d", maxNum); 
	return 0; // End the program
}

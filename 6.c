#include <stdio.h> // Header file for input/output functions

int main() // Main function
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n"); 
   // Prompting the user to enter the number of rows and columns of the matrices
   scanf("%d%d", &m, &n); // Reading the number of rows and columns
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++) { 
      // Looping through the rows of the first matrix
      for (d = 0 ; d < n; d++) {
         // Looping through the columns of the first matrix
         scanf("%d", &first[c][d]); // Reading the elements of the first matrix
      }
   }
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++) {
      // Looping through the rows of the second matrix
      for (d = 0 ; d < n ; d++) {
         // Looping through the columns of the second matrix
            scanf("%d", &second[c][d]); // Reading the elements of the second matrix
      }
   }
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
      // Looping through the rows of the sum matrix
      for (d = 0 ; d < n; d++) {
         // Looping through the columns of the sum matrix
         sum[c][d] = first[c][d] + second[c][d]; // Calculating the sum of the elements
         printf("%d\t", sum[c][d]); // Printing the elements of the sum matrix
      }
      printf("\n"); // Printing a newline character after each row of the sum matrix
   }
 
   return 0; // Return value for the main function
}

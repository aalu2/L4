#include <stdio.h> 

int main() 
{ 
    // Declare the number of terms in the series and the counter
    int num_of_terms, counter;
    
    // Declare the previous term, current term and next term in the series
    int previous_term = 0, current_term = 1, next_term;
    
    // Read the number of terms from the keyboard
    printf("Enter the number of terms: "); 
    scanf("%d", &num_of_terms); 
    
    // Print the Fibonacci series
    printf("Fibonacci series: "); 
    for (counter = 0; counter < num_of_terms; counter++) 
    { 
        // If the counter is 0 or 1, set the next term to be equal to the counter
        if (counter <= 1) 
            next_term = counter; 
        else
        { 
            // Calculate the next term as the sum of the previous and current terms
            next_term = previous_term + current_term; 
            
            // Update the values of the previous and current terms
            previous_term = current_term; 
            current_term = next_term; 
        } 
        
        // Print the next term in the series
        printf("%d, ", next_term); 
    } 
  
    return 0; 
}

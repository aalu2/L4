#include <stdio.h>

// Function to calculate the sum of the series 1 + 1/2 + 1/3 + ... + 1/n
float sum_series(int num_terms) {
    float sum = 0;
    for (int i = 1; i <= num_terms; i++) {
        // Add the next term in the series to the sum
        sum += 1.0f / i;
    }
    return sum;
}

int main() {
    int terms; // Number of terms in the series
    printf("Enter the number of terms in the series: ");
    scanf("%d", &terms);
    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is %f\n", terms, sum_series(terms));
    return 0;
}


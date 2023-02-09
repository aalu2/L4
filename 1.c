#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;  // initialize variables: num to store user input, i as loop counter, isPrime as flag to check if the number is prime or not
    
    printf("Enter any number: ");  // prompt user to enter a number
    scanf("%d", &num);  // read the number and store it in the variable 'num'
    
    for (i = 2; i <= num / 2; i++)  // start loop to check if the number is prime or not
    {
        if (num % i == 0)  // if num is divisible by any number less than or equal to half of itself, then it is not a prime number
        {
            isPrime = 0;  // set flag to 0 as the number is not prime
            break;  // exit the loop
        }
    }

    if (isPrime == 1)  // if the number is prime, flag is set to 1
        printf("%d is a prime number.", num);  // print the result
    else 
        printf("%d is not a prime number.", num);  // print the result

    return 0;  // end the program
}

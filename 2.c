#include <stdio.h>

int main()
{
    int num1, num2;  // initialize two variables to store the input integers

    printf("Read the integers from keyboard: ");  // prompt the user to enter two integers
    scanf("%d%d", &num1, &num2);  // read the two integers and store them in 'num1' and 'num2'

    int ans = num1 & num2;  // perform the bitwise AND operation between 'num1' and 'num2' and store the result in 'ans'

    printf("The Answer after ANDing is: %d", ans);  // print the result of the AND operation

    return 0;  // end the program
}

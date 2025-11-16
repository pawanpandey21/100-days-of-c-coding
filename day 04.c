
/* Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable. */

#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: "); 
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping:\n num1 = %d\n num2 = %d\n", num1, num2);
    return 0;
}

/* Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers. */

#include <stdio.h>
int main(){
    int n, sum;
    printf("Enter any natural number: ");
    scanf("%d", &n);

    sum = n* (n+1)/2;
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}

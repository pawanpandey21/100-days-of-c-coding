
/* Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit. */

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Degree Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f Degree F\n", fahrenheit);
    return 0;
}

/* Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.  */

#include <stdio.h>

int main(){
    int num1, num2, tempnum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    tempnum = num1;
    num1 = num2;
    num2 = tempnum;

    printf("After Swapping:\n num1 = %d\n num2 = %d\n", num1, num2);
    return 0;
}

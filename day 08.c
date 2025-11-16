
/*Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/

#include <stdio.h>
#include <ctype.h>

int main(){
   char inputchar;
   printf("Enter a character: ");
   scanf("%c", &inputchar);

   if (isupper(inputchar)){
    printf("%c is an uppercase alphabet.\n", inputchar);
   } else if (islower(inputchar)) {
    printf("%c is a lowercase alphabet.\n", inputchar);
    } 
   else if (isdigit(inputchar)) {
    printf("%c is a digit.\n", inputchar);
    } 
    else {
        printf("%c is a special character.\n", inputchar);  
   } 
}

/*Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else. */

#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 >= num2 && num1 >= num3){
     printf("%d is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
     printf("%d is the largest number.\n", num2);
     } 
    else {
     printf("%d is the largest number.\n", num3);
    }


}


/*Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c, D, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if (D > 0){
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (D == 0){
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same.\n");
        printf("Root: %.2f\n", root1);
    } else {
        printf("Roots are complex\n");
    }
}

/* Q18 (Conditional Statements)
Write a program to assign grades based on a percentage input. */ 

#include <stdio.h>

int main(){
    int percentage;
    char grade;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);
    
    if (percentage >= 90){
        grade = 'A';
    } else if (percentage >= 80){
        grade = 'B';
    }
     else if (percentage >= 60){
        grade = 'D';
    } else {
        grade = 'F';
    }
   
    printf("The grade is: %c\n", grade);
}

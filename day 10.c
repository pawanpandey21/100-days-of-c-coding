
/* Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */

#include <stdio.h>

int main(){
    int side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3){
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3){
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
    return 0;
}

/*Q20 (Conditional Statements)
Write a program to display the day of the week based on a number (1–7) using switch-case. */

#include <stdio.h>

int main(){
    int day;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input.\n");
    }
    return 0;
}

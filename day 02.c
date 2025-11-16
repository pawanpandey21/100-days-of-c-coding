
/*Q3 (User Inputs, Operations & Output)

Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */

#include <stdio.h>

int main(){
    int length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);
    return 0;
}

/* Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius. */

#include <stdio.h>

int main(){
    float PI = 3.14159;
    int radius;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle: %.2f cm^2c\n", area);
    printf("Circumference of the circle: %.2f cm\n", circumference);
    return 0;
}

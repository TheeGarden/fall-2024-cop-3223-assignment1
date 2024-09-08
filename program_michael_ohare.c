#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Gets user input
double askForUserInput() {
    double value;
    printf("Please enter a value: ");
    scanf("%lf", &value);
    return value;
}

// Calculates distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x1 and y1 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter x2 and y2 for Point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

// Calculates the perimeter 
double calculatePerimeter() {
    double radius = calculateDistance() / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the circle is %lf\n", perimeter);
    return 3; 
}

// Calculates the area 
double calculateArea() {
    double radius = calculateDistance() / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the circle is %lf\n", area);
    return 2; 
}

// Calculates the width
double calculateWidth() {
    double width = calculateDistance();
    printf("The width of the circle is %lf\n", width);
    return 1; 
}

// Calculates the height
double calculateHeight() {
    double height = calculateDistance();
    printf("The height of the circle is %lf\n", height);
    return 1; 
}

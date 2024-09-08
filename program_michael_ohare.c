#include <stdio.h>
#include <math.h> 

// 5 Functions asked for
double calculateWidth();
double calculateHeight();
double calculateDistance(double x1, double y1, double x2, double y2);
double calculateArea(double width, double height);
double calculatePerimeter(double width, double height);

int main() {
    // Get user inputs
    double width = calculateWidth();
    double height = calculateHeight();

    // Area and perimeter
    double area = calculateArea(width, height);
    double perimeter = calculatePerimeter(width, height);

    // For calculating distance
    double x1, y1, x2, y2;
    printf("Enter x1 and y1 coordinates: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 coordinates: ");
    scanf("%lf %lf", &x2, &y2);
    double distance = calculateDistance(x1, y1, x2, y2);

    // Prints everything
    printf("Width: %.2f\n", width);
    printf("Height: %.2f\n", height);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Distance between points (%.2f, %.2f) and (%.2f, %.2f): %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}

// Gives width
double calculateWidth() {
    double width;
    printf("Enter the width: ");
    scanf("%lf", &width);
    return width;
}

// Gives height
double calculateHeight() {
    double height;
    printf("Enter the height: ");
    scanf("%lf", &height);
    return height;
}

// Uses the pythagorean theorem
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Gives area 
double calculateArea(double width, double height) {
    return width * height;
}

// Gives perimeter 
double calculatePerimeter(double width, double height) {
    return 2 * (width + height);
}

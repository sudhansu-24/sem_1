#include <stdio.h>

// area of a square
float arsquare(float side) {
    return side * side;
}

// area of a rectangle
float arRectangle(float length, float width) {
    return length * width;
}

// area of a circle
float arcircle(float radius) {
    return 3.141 * radius * radius;
}

// surface area of a cone
float arcone(float radius, float height) {
    return 3.141 * radius * (radius + height);
}

// surface area of a cylinder
float arcylinder(float radius, float height) {
    return 3.141 * radius * radius * height;
}

int main() {
    int choice;
    float side, length, width, radius, height;

    printf("Choose the geometry shape:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Cone\n");
    printf("5. Cylinder\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        printf("Area of the square: %.2f\n", arsquare(side));
        break;
    case 2:
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        printf("Area of the rectangle: %.2f\n", arRectangle(length, width));
        break;
    case 3:
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        printf("Area of the circle: %.2f\n", arcircle(radius));
        break;
    case 4:
        printf("Enter the radius and height of the cone: ");
        scanf("%f %f", &radius, &height);
        printf("Surface area of the cone: %.2f\n", arcone(radius, height));
        break;
    case 5:
        printf("Enter the radius and height of the cylinder: ");
        scanf("%f %f", &radius, &height);
        printf("Surface area of the cylinder: %.2f\n", arcylinder(radius, height));
        break;
    default:
        printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }
    printf("SUDHANSU SEKHAR ROLL NO 91\n");

    return 0;
}

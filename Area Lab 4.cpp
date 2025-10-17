#include <stdio.h> //Lab 4: Area of Circle, Rectangle and Triangle using switch case, 17th of October 2025

int main()
{
    int ch;
    float rad, height, wid, base;
    float area;

    printf("Press 1 for the area of Circle, 2 for the area of Rectangle, and 3 for Triangle:\n");
    if (scanf("%d", &ch) != 1) {
        printf("Invalid input for choice.\n");
        return 1;
    }

    switch (ch)
    {
    case 1:
        printf("Enter the Radius: ");
        if (scanf("%f", &rad) != 1) { printf("Invalid radius.\n"); return 1; }
        area = 3.14f * rad * rad;
        printf("Area: %2.f\n", area);
        break;

    case 2:
        printf("Enter the base: ");
        if (scanf("%f", &base) != 1) { printf("Invalid base.\n"); return 1; }
        printf("Enter the width: ");
        if (scanf("%f", &wid) != 1) { printf("Invalid width.\n"); return 1; }
        area = base * wid;
        printf("Area: %2.f\n", area);
        break;

    case 3:
        printf("Enter the base: ");
        if (scanf("%f", &base) != 1) { printf("Invalid base.\n"); return 1; }
        printf("Enter the height: ");
        if (scanf("%f", &height) != 1) { printf("Invalid height.\n"); return 1; }
        area = 0.5f * base * height;
        printf("Area: %2.f\n", area);
        break;

    default:
        printf("Invalid choice. Please run again and select 1, 2 or 3.\n");
        return 1;
    }

    return 0;
}
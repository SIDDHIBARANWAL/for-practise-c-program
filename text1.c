#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main()
{
    float angle;
    printf("Enter an angle (in degrees): ");
    scanf("%f", &angle);

    double radians = angle * PI / 180.0; 
    printf("Here are the trigonometric ratios for the angle:\n");
    printf("sin = %f\n", sin(radians));
    printf("cos = %f\n", cos(radians));
    printf("tan = %f\n", tan(radians));
    printf("cosec = %f\n", 1.0/sin(radians));
    printf("sec = %f\n", 1.0/cos(radians));
    printf("cot = %f\n", 1.0/tan(radians));
    return 0;
}
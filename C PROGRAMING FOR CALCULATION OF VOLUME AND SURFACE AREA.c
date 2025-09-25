// calculation 0f volume and surface area
/*
name;francis gitau njuguna
reg.CT100/G/26126/25
*/

#include<stdio.h>
#define PI 3.14159

int main()
{
    float radius, height, volume, surfacearea;

    //prompt user input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    //calculate the volume and surface area
    volume = PI * radius * radius * height;
    surfacearea = 2 * PI * radius * radius + 2 * PI * radius * height;

    //display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfacearea);

    return 0;
}
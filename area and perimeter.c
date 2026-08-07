#include <stdio.h>
int main() {
float length, width, area, perimeter;
printf("enter the lengthh and width:");
scanf("%f%f", &length, &width);
area = length * width;
perimeter = 2*(length + width);
printf("area= %.2f\n", area);
printf("perimeter = %.2f", perimeter);
return 0;}

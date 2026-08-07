# include <stdio.h>
int main() {
float r, area, circumference;

printf("enter the radius of circle;");
scanf("%f", &r);

area= 3.14 * r * r;
circumference= 2 * 3.14 * r;

printf("area of the circle = %.2f\n", area);
printf("ciecumference of the circle = %.2f\n", circumference);
return 0;}

# include <stdio.h>
int main() {
float celcius, fahrenheit;
printf("enter temprature in celcius:");
scanf("%f", &celcius);
fahrenheit=(celcius*9/5)+32;
printf("temprature in fahrenheit = %.2f\n",fahrenheit);
return 0;}

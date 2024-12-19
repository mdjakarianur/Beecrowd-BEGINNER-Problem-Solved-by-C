#include <stdio.h>
int main() {
double A, B, average;
scanf("%lf %lf", &A, &B);
average = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
printf("MEDIA = %.5lf\n", average);
return 0;}

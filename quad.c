#include <stdio.h>
#include <math.h>
int main() {
    double root1,root2,discriminant;
    printf("enter the quadratic equation in the form of ax^2+bx+c");
    float a,b,c,d,e;
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b+(sqrt((b*b)-4*a*c)))/2*a;
    e=(b*b-(sqrt((b*b)-4*a*c)))/2*a;
    printf("the roots of the entered quadratic equation is %f and %f",d,e);





}
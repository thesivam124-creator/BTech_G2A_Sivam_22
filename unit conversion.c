#include <stdio.h>
int main() {
    float a;
    printf("ënter the length in km:");
    scanf("%f",&a);
    float miles;
    miles=a/1.609;
    printf("the length in miles is %f",miles);
}
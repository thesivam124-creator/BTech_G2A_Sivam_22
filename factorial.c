#include <stdio.h>
int main() {
    printf("enter the number:");
    int a,b,i;
    i=1;
    b=1;
    scanf("%d",&a);
    for(i;i<=a;i++) {
        b*=i;
    }
printf("the factorial of all numbers form 0 to given number = %d",b);
}
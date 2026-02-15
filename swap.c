#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the another number:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("the number swap to a=%d,b=%d",a,b);

}
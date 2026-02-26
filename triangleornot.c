#include <stdio.h>
int main() {
    printf("ënter the size of three sides of triangle:" );
    float a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c||a+c>b||b+c>a) {
        printf("this are the sides of a triangle");
    }
    else {
    printf("these sides are not sides of a triangle");
    }
}
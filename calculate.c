#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    printf("enter the operator(+,-,*,/)");
    scanf("%c",&operator);
    printf("enter the two numbers:");
    int a,b;
    scanf("%d%d",&a,&b);



    switch(operator) {
        case '+':
        printf("the sum of two numbers:%d",a+b);
        break;
        case'-':
        printf("the difference of two numbers is %d",a-b);
        break;
        case'*':
        printf("the product of two numbers are %d",a*b);
        break;
        case'/':
        printf("the division of two numbers are %f",(float)(a/b));
        break;
        
        


    }

    
}
#include <stdio.h>

int main(){

    float subject1, subject2, subject3, subject4, subject5;

    float percentage,sum;

printf("Enter the marks of 1st subject ");
scanf("%f",&subject1);

printf("Enter the marks of 2nd subject ");
scanf("%f",&subject2);
printf("Enter the marks of 3rd subject ");
scanf("%f",&subject3);
printf("Enter the marks of 4th subject ");
scanf("%f",&subject4);
printf("Enter the marks of 5th subject ");
scanf("%f",&subject5);

sum=(subject1+subject2+subject3+subject4+subject5);

percentage=sum/5;

int grade=percentage/10;


switch (grade)
{
case 10:
case 9:
    printf("Grade A\n");
    break;
case 8:
case 7:
    printf("Grade A\n");
    break;


    printf("Grade B\n");
    break;

default:
    break;
}

printf("The sum of marks of five subjects are %.2f\n",sum);
printf("The percentage of five subjects are %.2f '%'",percentage);

return 0;
}
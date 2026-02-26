#include <stdio.h>

int main() {
    printf("enter the number of the month:");
    int a;
    scanf("%d",&a);
    switch(a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("this month ahas 31 days");
            break;
        case 6:
        case 4:
        case 9:
        case 11:
              printf("this month as 30 days ");
              break;
        case 2:
              int Year;
              printf("ënter the year:");
              scanf("%d",&Year);
              if(Year % 4 == 0 && Year % 100 != 0) {
                printf("this month has 29 days");
              }
              else {
                printf("this month as 28 days");
            
              }
              


    }
}





              

#include <stdio.h>
int main() {
char a;
printf("enter the character: ");
scanf("%c",&a);
if(isalpha(a)) {
    printf("the entered character is alphabet");
}
else if (isdigit(a)) {
    printf("the entered character is number");

}
else {
    printf("thge entered character contains special character");
}
}
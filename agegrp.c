#include <stdio.h>
int main() {
    printf("ENTER YOUR AGE GROUP:");
    int a;
    scanf("%d",&a);
if(a>=60) {
    printf("SENIOR CITIZEN");
}
else if(a<60 && a>18) {
    printf("ÄDULT");
}
else if(a>12 && a<=18) {
    printf("TEENAGER");
}
else {
    printf("CHILD");
}

}

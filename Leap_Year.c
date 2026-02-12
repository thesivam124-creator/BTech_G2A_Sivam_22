#include <stdio.h>
int main ()
{
    int year ;
    printf ("Enter the Year\n");
    scanf ("%d",&year);
    if (year%4==0)
    {
        printf ("The Year Is Leap Year");
    }
    else {
        printf ("The year Is Not a Leap Year");
    }
}
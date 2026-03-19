#include <stdio.h>
int main() {
    int i,a,b=0;
    printf("enter the size of an array:");
    scanf("%d",&a);
    int arr[a];
   
   for(i=0;i<a;i++) {
           scanf("%d",&arr[i]);

   }
   for(i=0;i<a;i++) 
       {
        b+=arr[i];
      }
 printf("the sum of elements in c:%d",b);
}
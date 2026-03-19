#include <stdio.h>
#include <limits.h>
int main() {
    int i,a,b=0;
    printf("enter the size of an array:");
    scanf("%d",&a);
    int arr[a];
   
   for(i=0;i<a;i++) {
           scanf("%d",&arr[i]);

   }
   int max = INT_MIN;
   for(i=0;i<a;i++) 
       {
       if (arr[i]>max) {
        max=arr[i];
       }
      }
 printf("the max of elements in c:%d",max);
}
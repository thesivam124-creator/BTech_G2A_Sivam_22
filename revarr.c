#include <stdio.h>
int main() {
   int a,b,c,d,e;
   printf("ënter the elements for c in ascending order of index:");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   int arr[]={a,b,c,d,e};
   for(int i = 4; i>=0; i--) {
    printf("%d",arr[i]);
   }

}












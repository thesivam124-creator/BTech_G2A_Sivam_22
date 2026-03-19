#include <stdio.h>
int main() {
    int i,a;
    printf("enter the size of an array:");
    scanf("%d",&a);
    int arr[a];
   int odd = 0;
  int  even = 0;
   for(i=0;i<a;i++) {
           scanf("%d",&arr[i]);
   }
    for(i=0;i<a;i++){    
        if (arr[i]%2==0) {
            even+=1;
            
        }
        else {
            odd+=1;
            
        }
    }
     printf("the no. of even in itegers are %d \n",even);
      printf("the no. of  odd integres are : %d \n",odd);
}
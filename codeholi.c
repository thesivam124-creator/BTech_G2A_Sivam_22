#include <stdio.h> 
#include <string.h>
int main() {
struct employee {
    int id,found;
    char name[50];
    float salary;
};
int n,searchid,found=0;
printf("enter the number of employees:");
scanf("%d",&n);
struct employee emp[n];
for (int i=0;i<n;i++) {
    printf("enter the details for employee %d\n",i+1);
    printf("id:");
    scanf("%d",&emp[i].id);
    printf("name:");
    scanf("%s",&emp[i].name);
    printf("salary:");
    scanf("%f",&emp[i].salary);

}
printf("enter the emp id to search:");
scanf("%d",&searchid);
for (int i=0;i<n;i++) {
    if (emp[i].id==searchid) {
        printf("employee found:\n");
        printf("id:%d\n name:%s\n salary:%f\n",emp[i].id,emp[i].name,emp[i].salary);
        found=1;
        break;
        }
        }
        if (!found) {
        printf("employee with id %d not found.\n",searchid);
        }
}
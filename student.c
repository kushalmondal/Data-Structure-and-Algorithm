#include <stdio.h>
#include<string.h>
typedef struct{
    
    char name[10];
    int id;
    int ph;
}stu;

int main()
{
    stu s[10];
    int i,j;
    for(i=0;i<1;i++){
        
        printf("Enter the name of the student %d: ",i+1);
        scanf("%s",&s[i].name);
        printf("Enter the id of the student %d: ",i+1);
        scanf("%d",&s[i].id);
        printf("Enter the phone no. of the student %d: ",i+1);
        scanf("%d",&s[i].ph);
        
    }
    for(i=0;i<1;i++){
        
        printf("Name of the student %d: %s\n",i+1,s[i].name);
        printf("Id of the student %d: %d\n",i+1,s[i].id);
        printf("Phone no. of the student %d: %d\n",i+1,s[i].ph);
        printf("------------------------------------------------------------------");
        printf("\n");
    }

    return 0;
}

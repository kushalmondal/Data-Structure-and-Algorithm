#include<stdio.h>
void main(){
int a[50],i,j,n,k,r,key,s;
printf("Enter the no. of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    r = rand()%10;
    a[i] = r;
}
while(s != 3){
printf("\n1. Ascending order\n 2. Descending Order\n 3. exit\n");
printf("Enter the number: ");
scanf("%d",&s);
switch(s){
    
    case 1: display(a,n);
            insertion(a,n);
            printf("\n");
            printf("ascending order: ");
            for(i=0;i<n;i++){
                printf("%d\t",a[i]);

            }
            break;
    
    case 2: display(a,n);
            insertion(a,n);
            printf("\n");
            printf("descending order: ");
            for(i=n-1;i>=0;i--){
                printf("%d\t",a[i]);

            }
            break;
    
    }
}
}
int display(int a[],int n){
    
    printf("Before sorting: ");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
}
int insertion(int a[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
    key = a[i];
    j= i-1;
    while(j>=0 && a[j] > key){
        
        a[j+1] = a[j];
        j=j-1;
        
    }
    a[j+1] = key;
}
    
    
}

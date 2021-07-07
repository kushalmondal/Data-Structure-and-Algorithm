//Best Approach for inserion sort
#include<stdio.h>
void main(){
int a[50],i,j,n,k;
printf("Enter how many elements you want to enter: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);

}
printf("Before sorting: ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);

}
printf("\n");
for(i=1;i<n;i++){
        for(j=i; j >= 0; j--){

                if(a[j-1] > a[j]){
                        k = a[j-1];
                        a[j-1] = a[j];
                        a[j] = k;
                }


        }
}
printf("After sorting: ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);

}
printf("\n");
}

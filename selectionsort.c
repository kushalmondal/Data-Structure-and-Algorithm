#include<stdio.h>
void main(){
int a[50],i,j,n,k,swap,min;
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
for(i=0;i<n-1;i++){
    min = i;
        for(j=i+1; j < n; j++){

                if(a[j] < a[min]){
                    min = j;
                        
                }

        }
        if(min != i){
            swap = a[i];
            a[i] = a[min];   
            a[min] = swap;
    }
}
printf("After sorting: ");
for(i=0;i<n;i++){
printf("%d\t",a[i]);

}
printf("\n");
}

//Best Approach to find out the minimum and maximum elements from an array
#include<stdio.h>
void main(){
int a[50],i,j,max,min,n,max1,min1;
printf("Enter the no. of elements: ");
scanf("%d",&n);
printf("Enter the elements : ");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);

}
if(n%2 != 0){
	max = a[0];
	min = a[0];
	for(i=1;i<n;i = i+2){
		max1 = max;
		min1 = min;
		if(a[i] < a[i+1]){

			max = a[i+1];
			min = a[i];
		}
		if(a[i] > a[i+1]){

			max = a[i];
			min = a[i+1];
		}
		if(min1 < min){
			min = min1;
		}
		if(max1 > max){
			max = max1;
		}




	}
}
if(n%2 == 0){
	max = a[0];
	min = a[0];
	
	for(i=0;i<n;i = i+2){
		max1 = max;
		min1 = min;
		
		if(a[i] < a[i+1]){

			max = a[i+1];
			min = a[i];
		}
		if(a[i] > a[i+1]){

			max = a[i];
			min = a[i+1];
		}
		if(min1 < min){
			min = min1;
		}
		if(max1 > max){
			max = max1;
		}




	}
}
printf("max = %d\n",max);
printf("min = %d\n",min);


}

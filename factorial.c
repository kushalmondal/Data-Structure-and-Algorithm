#include<stdio.h>
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
int factorial(int n){
        if(n==0)
                return 1;
        else
                return  n*factorial(n-1);




}
printf("Factorial of the number is : %d\n",factorial(n));

}

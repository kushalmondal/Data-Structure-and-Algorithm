#include <stdio.h>
int gcd(int a, int b)
{
   int c,i,ans = 1;
   c = a>=b?b:a;
   for(i=c;i>=1;i--){
       
       if(a%i==0 && b%i==0 ){
           
           ans = i;
           break;
       }
       
   }
   return ans;
}
int main()
{
    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}

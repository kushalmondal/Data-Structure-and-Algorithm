#include <stdio.h>
int gcd(int a, int b)
{
    int c, n=0,m=0,i,ans=1;
    c = a>=b?b:a;
    for(i=2;i<c;i++){
        n=0,m=0;
        if(a%i == 0){
            n=1;
            a = a/i;
        }
        if(b%i == 0){
            m=1;
            b = b/i;
        }
        if(n == 1 && m == 1)  {
            
            ans = ans * i;
        }
        
        if(n==1 || m==1){
            
            i--;
            
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


#include <stdio.h>
int isprime(int num, int i){
    if(i==1){
        return 1;
    }
    else{
        if(num%i == 0){
            
            return 0;
        }else{
            
            isprime(num,i-1);
        }
        
    }
    
}
int main()
{
    int i,n,prime;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n == 0 || n == 1){
        printf("%d is not a prime number\n",n);
    }else{
        i = n/2;
        prime = isprime(n,i);
        if(prime == 1){
            printf("%d is a prime number\n",n);
        }else("%d is not a prime number\n",n );
    }
    return 0;
}

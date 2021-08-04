#include <stdio.h>

int main()
{
    int i,n,count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        if(n%i == 0){
            
            count++;
            
        }
        
        
    }
    if(count == 2){
        
        printf("Prime number\n");
        
    }
    else{
        
        printf("Not prime\n");
    }
    return 0;
}

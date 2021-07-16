#include <stdio.h>

int main()
{
    float a,b;
    char c;
    printf("Choose an opearation: \n");
    printf("1.Addition(+)\n 2.Substration(-)\n 3.Division( / )\n 3. Multiplication(*)\n");
    scanf("%c",&c);
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    switch(c){
        case '+':printf("After Addition: %f\n",a+b);
                    break;
        case '-':printf("After Substraction: %f\n",a-b);
                    break;
        case '/': if(b == 0){
                    
                    printf("Infinity\n");    
                    }
                    else{
                        
                        printf("After division: %f\n",a/b);
                    }
                    break;
        case '*': printf("After Multiplication: %f\n",a*b);
                    break;
    }
    
}

//Addition and Product of two complex equations using structure, function, and switch case

#include <stdio.h>
#include<stdlib.h>
typedef struct{
    
    int real;
    int imag;
}complex;
complex sum(complex c1,complex c2);
complex prod(complex c1,complex c2);
int main()
{
    complex c1, c2, c3, c4;
    int x;
    printf("Enter the real for 1st equation: ");
    scanf("%d",&c1.real);
    printf("Enter the imaginary for 1st equation: ");
    scanf("%d",&c1.imag);
    printf("Enter the real for 2nd equation: ");
    scanf("%d",&c2.real);
    printf("Enter the imaginary for 2nd equation: ");
    scanf("%d",&c2.imag);
    printf("The 1st equation: %d + %di", c1.real,c1.imag);
    printf("\n");
    printf("The 2nd equation: %d + %di", c2.real,c2.imag);
    printf("\n");
    printf("Enter a choice:\n");
    printf("1. Addition\n");
    printf("2.Product\n");
    scanf("%d",&x);
    switch(x){
        
        case 1: c3 = sum(c1, c2);
                printf("Addition of two complex equations are: %d + %di", c3.real,c3.imag);
                printf("\n");
                break;
        
        case 2:  c4 = prod(c1, c2);
                printf("Product of two complex equations are: %d + %di", c4.real,c4.imag);
                printf("\n");
                break;
    }
    return 0;
}
complex sum(complex c1, complex c2){
    
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return (temp);
    
}
complex prod(complex c1, complex c2){
    
    complex temp;
    temp.real = c1.real * c2.real;
    temp.imag = c1.imag * c2.imag;
    return (temp);
    
}

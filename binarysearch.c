#include <stdio.h>
#include <stdbool.h>

int binarySearch(int a[], int n, int key);

int main()
{
    int i,j,first,last,middle,key,n,a[100];
    printf("How many elements you want to enter: ");
    scanf("%d",&n);
    printf("Enter the element in ascending order: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the array elements you want to find: ");
    scanf("%d",&key);
    
    printf("Your Array elements: ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    
    j= binarySearch(a,n,key);
    if(j==1){
        printf("Staus: Found\n");
    }
    else if(j == -1){
        printf("Status: Not Found\n");
    }
    
    

    return 0;
}

int binarySearch(int arr[], int n, int x)
{
    int l,r,m;
    l=0;
    r= n-1;
    
    
    while (l <= r) {
       
         m = (l + r) / 2;
  
       
        if (arr[m] == x)
           
            return 1;
  
        if(arr[m] < x)
            l = m + 1;
  
        
        else
            r = m - 1;
    }
  
    
    return -1;
}
  

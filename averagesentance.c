#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    float len,word,count = 0, letter = 0;
    printf("Enter string: ");
    gets(a);
    len = strlen(a);
    for(int i=0;i<len;i++){
        
        if(a[i] == ' '){
            
            count ++;
        }
        if(a[i] != ' '){
            
            letter ++;
        }
        
    }
    word = count + 1;
    printf("The no. of words: %f\n",word);
    printf("The no. of letters: %f\n",letter);
    printf("Average number of letters: %f\n",letter/word);
    
}

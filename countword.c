#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i, words;

    
    printf("Enter any string: ");
    gets(s);
    i = 0;
    words = 1;
    while(s[i] != '\0')
    {
        
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}

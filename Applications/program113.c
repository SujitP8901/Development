//	Input 	:	This is C 
//	Output 	:	This
//				is
//				C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void PrintTokens(char *Arr)
{
    while(*Arr != '\0')
    {
        if(*Arr == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", *Arr);
        }
        Arr++;
    }
}

int main()
{
    char* str = NULL;
	
	str = malloc(1024 * sizeof(char));
    
	scanf("%[^'\n']s", str);
    
	str = realloc(str, strlen(str) + 1);
	
    PrintTokens(str);
    
    return 0;
}

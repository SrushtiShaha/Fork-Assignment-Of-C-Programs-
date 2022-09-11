/// Using Conditional Operator - if….else….if ladder).

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    char ch = {'\0'};
    
    printf("\n\t Enter A Character => ");
    scanf("%c",&ch);
    
    if( ch >= 65 && ch <= 90 )
    {
        printf("\n\t Entered Character %c Is Uppercase.\n",ch);        
    }
    else if( ch >= 97 && ch <= 122 )
    {
        printf("\n\t Entered Character %c Is Lowercase.\n",ch);
    }
    else if( ch >= 48 && ch <= 57 )
    {
        printf("\n\t Entered Character %c Is Digit.\n",ch);
    }
    else if( ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 92 && ch <= 95 )
    {
        printf("\n\t Entered Character %c Is Special Symbol.\n",ch);
    }
    else
    {
        printf("\n\t Invalid Input.\n");
    }
    
    getch();
    return 0;
}

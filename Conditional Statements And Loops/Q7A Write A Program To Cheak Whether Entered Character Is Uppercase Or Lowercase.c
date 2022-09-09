#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    char ch = {'\0'};
    
    printf("\n\t Enter A Character => ");
    scanf("%c",&ch);
    
    if( ch >= 'A' && ch <= 'Z' )
    {
        printf("\n\t Entered Character %c Is Uppercase.\n",ch);        
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n\t Entered Character %c Is Lowercase.\n",ch);
    }
    else
    {
        printf("\n\t Invalid Input.\n");
    }
    
    getch();
    return 0;
}
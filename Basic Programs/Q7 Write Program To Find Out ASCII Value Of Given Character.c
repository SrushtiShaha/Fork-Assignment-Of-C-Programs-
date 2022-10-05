/// Write Program To Find Out ASCII Value Of Given Character.

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    char ch = '\0';
    
    printf("\n Enter A Character To Find It's ASCII Value => ");
    scanf("%c",&ch);
    
    printf("\n The Ascii Value Of Given %c = %d\n",ch,ch);
    
    getch();
    return 0;
}
/// Write Program To Find Out Character For Given ASCII Value.

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int ch = 0;
    
    printf("\n Enter A Ascii Value To Find It's Character => ");
    scanf("%d",&ch);
    
    printf("\n The Character Of Given Ascii Value %d Is => %c\n",ch,ch);
    
    getch();
    return 0;
}
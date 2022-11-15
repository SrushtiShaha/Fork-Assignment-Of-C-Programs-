/// Program To Print Ascii Table ( 0 - 127 ).

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int i = 0;
    
    printf("ASCII Table Is -> \n");
    
    printf("\n=====================\n\n");
    
    for( i = 0; i <= 127; i++ )
    {
        printf("\t\t %-3d = |%c| \n",i,i);
    }
    
    printf("\n=====================\n");
    
    getch();
    return 0;
}

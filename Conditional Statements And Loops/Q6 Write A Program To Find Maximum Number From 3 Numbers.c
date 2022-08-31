#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int iN1 = 0, iN2 = 0, iN3 = 0;
    
    printf("\n Enter Any Three Numbers => ");
    scanf("%d%d%d",&iN1,&iN2,&iN3);
    
    if( iN1 > iN2 && iN1 > iN3 )
    {
        printf("\n\t %d Is Greater.\n",iN1);       
    }
    else if( iN2 > iN1 && iN2 > iN3 )
    {
        printf("\n\t %d Is Greater.\n",iN2);
    }
    else
    {
        printf("\n\t %d Is Greater.\n",iN3);
    }
    
    getch();
    return 0;
}
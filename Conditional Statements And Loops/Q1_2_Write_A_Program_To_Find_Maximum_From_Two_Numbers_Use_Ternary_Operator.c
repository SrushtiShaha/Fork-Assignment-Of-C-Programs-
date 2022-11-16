/// Write Program To Find Maximum From 2 Numbers Use Ternary Operator.

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("\n Enter Two Numbers => ");
    scanf("%d%d",&iNo1,&iNo2);
    
    ( iNo1 > iNo2 ) ? printf("\n %d Is Maximum.\n") : ( iNo1 < iNo2 ) ? printf("\n %d Is Maximum.\n") : printf("\n Both Numbers %d And %d Are Equal.\n",iNo1,iNo2);
    
    getch();
    return 0;
}
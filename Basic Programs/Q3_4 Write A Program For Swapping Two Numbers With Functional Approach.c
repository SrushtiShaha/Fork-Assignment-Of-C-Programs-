/// Write A Program For Swapping Two Numbers Without Functional Approach.
/// Using 3 Variables.

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

void Swap( int, int );

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("\n Enter Two Numbers => ");
    scanf("%d%d",&iNo1,&iNo2);
  
    Swap( iNo1, iNo2 );
  
    getch();
    return 0;
}

void Swap( int iN1, int iN2 ) // 3 8
{
    iN1 = iN1 + iN2;
    iN2 = iN1 - iN2;
    iN1 = iN1 - iN2;
    
    printf("\n After Swapping The Values Of Numbe1 = %d And Number2 = %d \n", iN1, iN2);
 
    return;
}
/// Write Program For Arithmetic Operator’s Implementation ( Use Functional Approach ).

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

void Add( int, int );
void Sub( int, int );
void Mult( int, int );
void Div( int, int );
void Mod( int, int );

int main()
{
    int iNo1 = 0, iNo2 = 0;
    
    printf("\n Enter Two Numbers => ");
    scanf("%d%d",&iNo1,&iNo2);
    
    printf("\n Arithmetic Operations Are -> \n");
    
    Add( iNo1, iNo2 );
    Sub( iNo1, iNo2 );
    Mult( iNo1, iNo2 );
    Div( iNo1, iNo2 );
    Mod( iNo1, iNo2 );
    
    printf("\n Thanks \n");

    getch();
    return 0;
}

void Add( int iN1, int iN2 )
{
    int iAns = 0;
    
    iAns = iN1 + iN2;
    
    printf("\n Addition Of %d + %d = %d \n",iN1, iN2, iAns);
    
    return ;
}

void Sub( int iN1, int iN2 )
{
    int iAns = 0;
    
    iAns = iN1 - iN2;
    
    printf("\n Substraction Of %d - %d = %d \n",iN1, iN2, iAns);
    
    return ;
}

void Mult( int iN1, int iN2 )
{
    int iAns = 0;
    
    iAns = iN1 * iN2;
    
    printf("\n Multiplication Of %d * %d = %d \n",iN1, iN2, iAns);
    
    return ;
}

void Div( int iN1, int iN2 )
{
    int iAns = 0;
    
    iAns = iN1 / iN2;
    
    printf("\n Division Of %d / %d = %d \n",iN1, iN2, iAns);
    
    return ;
}

void Mod( int iN1, int iN2 )
{
    int iAns = 0;
    
    iAns = iN1 % iN2;
    
    printf("\n Modulus Of %d %% %d = %d \n",iN1, iN2, iAns);
    
    return ;
}

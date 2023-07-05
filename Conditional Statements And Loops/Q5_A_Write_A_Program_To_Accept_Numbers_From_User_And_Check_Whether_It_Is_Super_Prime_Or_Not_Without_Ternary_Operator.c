#include<stdio.h>
#include<conio.h>

void Prime( int );
void Super_Prime( int );

int main()
{
        int iNo = 0;

        printf("\n Enter A Number To Check That Number Is Super Prime Or Not -> ");
        scanf("%d",&iNo);

        Prime( iNo );

        getch();
        return 0;
}

void Prime( int iN )
{
        int i = 0;

        for( i = 2; i < iN; i++ )
        {
                if( iN % i == 0 )
                {
                        break;
                }
        }

        if( i == iN )
        {
                printf("\n The Number %d Is A Prime Number.", iN);

                Super_Prime( iN );
        }
        else
        {
                printf("\n The Number %d Is Not A Prime Number.", iN);
        }

        return;
}

void Super_Prime( int iN )
{

}

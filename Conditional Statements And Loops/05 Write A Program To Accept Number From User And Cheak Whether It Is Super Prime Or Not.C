#include<stdio.h>
#include<conio.h>

void Find_Prime( int );
void Find_Super_Prime( int );

int main()
{
        int iNo = 0;

        UP:

            printf("\n Enter Any Number => ");
            scanf("%d",&iNo);

            Find_Prime( iNo );

            getch();

            goto UP;

            getch();
            return 0;
}

void Find_Prime( int iNum )
{
        int i = 0;

        for( i = 2; i <= iNum; i++ )
        {
                if( iNum % i == 0 )
                {
                        break;
                }
        }

        if( iNum == i )
        {
                printf("\n Entered Number %d Is Prime Number.\n",iNum);

                Find_Super_Prime( iNum );
        }
        else
        {
                printf("\n Entered Number %d Is Not A Prime Number.\n\n Therefore It Is Also Not A Super Prime Number. \n",iNum);
        }

        return;
}

void Find_Super_Prime( int iN )
{
        int iTemp = 0, iDig = 0, iSum = 0, i = 0;

        iTemp = iN;

        if( iTemp > 0 )
        {
                iDig = iTemp % 10;

                iSum = iSum + iDig;

                iTemp = iTemp / 10;
        }

        for( i = 2; i <= iN; i++ )
        {
                if( iN % i == 0 )
                {
                        break;
                }
        }

        if( iN == i )
        {
                printf("\n Also The Number %d Is A Super Prime Number.\n",i);
        }
        else
        {
                printf("\n But The Number Is Not A Super Prime Number.\n");
        }

        return;
}


#include<stdio.h>
#include<conio.h>

void Max_No( int, int );

int main()
{
        int iNo1 = 0, iNo2 = 0;

        printf("\n Enter First Number -> ");
        scanf("%d",&iNo1);

        printf("\n Enter Second Number -> ");
        scanf("%d",&iNo2);

        Max_No( iNo1, iNo2 );

        getch();
        return 0;
}

void Max_No( int iN1, int iN2 )
{
        if( iN1 > iN2 )
        {
                printf("\n First Number %d Is Greater Than %d.", iN1, iN2);
        }
        else if( iN2 > iN1 )
        {
                printf("\n Second Number %d Is Greater Than %d.", iN2, iN1);
        }
        else
        {
                printf("\n Both The Numbers %d And %d Are Equal.", iN1, iN2);
        }

        return;
}

#include<stdio.h>
#include<conio.h>

int main()
{
        int iNo = 0;

        printf("\n Enter A Number To Check Whether The Number Is Even Or Odd -> ");
        scanf("%d",&iNo);

        if( iNo == 0 )
        {
                printf("\n Entered Number %d Is Neutral.", iNo);
        }
        else if( iNo % 2 == 0 )
        {
                printf("\n Entered Number %d Is Even.", iNo);
        }
        else
        {
                printf("\n Entered Number %d Is Odd.", iNo);
        }

        getch();
        return 0;
}

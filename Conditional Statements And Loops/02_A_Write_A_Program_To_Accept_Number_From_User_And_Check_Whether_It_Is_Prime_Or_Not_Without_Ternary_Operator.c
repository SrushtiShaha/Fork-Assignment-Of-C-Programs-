#include<stdio.h>
#include<conio.h>

int main()
{
        int iNo = 0, i = 0;

        printf("\n Enter A Number To Check It Is Prime Or Not -> ");
        scanf("%d",&iNo);

        for( i = 2; i < iNo; i++ )
        {
                if( iNo % i == 0 )
                {
                        break;
                }
        }

        if( i == iNo )
        {
                printf("\n The Entered Number %d Is A Prime Number. \n",iNo);
        }
        else
        {
                printf("\n The Entered Number %d Is Not A Prime Number. \n",iNo);
        }

        getch();
        return 0;
}

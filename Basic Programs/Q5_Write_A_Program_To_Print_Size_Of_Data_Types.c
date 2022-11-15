/// Write Program To Print Size Of int, float, double, Etc.( Use sizeof Operator ).

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    printf("\n Size Of Data Types Are -> \n");
    printf("\n*********************************\n");
    printf("\n The Size Of void Is ->        %d \n",sizeof(void));
    printf("\n The Size Of short int Is ->   %d \n",sizeof(short int));
    printf("\n The Size Of int Is ->         %d \n",sizeof(int));
    printf("\n The Size Of long int Is ->    %d \n",sizeof(long int));
    printf("\n The Size Of char Is ->        %d \n",sizeof(char));
    printf("\n The Size Of float Is ->       %d \n",sizeof(float));
    printf("\n The Size Of double Is ->      %d \n",sizeof(double));
    printf("\n The Size Of long double Is -> %d \n",sizeof(long double));
    printf("\n*********************************\n");
    
    getch();
    return 0;
}

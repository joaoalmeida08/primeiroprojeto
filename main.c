/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int valor1;
    int valor2;
 
    printf("digite o valor1 : ");
    scanf("%d",& valor1);
    
    printf("digite o valor2:");
    scanf("%d",& valor2);
    
    printf("o valor ditado foi:%d",valor1 + valor2);
    return 0;
}
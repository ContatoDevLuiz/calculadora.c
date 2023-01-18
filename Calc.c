#include <stdio.h>

int main()
{
    int num1, num2, soma, subtracao, multi, div, mod, incre, decre;

    printf("Calculadora De Multiplos Operadores Aritméticos \n");
    printf("Digite Os 2 Numeros A Serem Computados: ");
    scanf("%i%i", &num1, &num2);
   
    soma            = num1 + num2;
    subtracao       = num1 - num2;
    multi           = num1 * num2;
    div             = num1 / num2;
    mod             = num1 % num2;

    
    printf( "A Adição É : [%i]\n", soma );
    printf( "A Subtração É : [%i]\n", subtracao );
    printf( "A Multiplicação É : [%i]\n", multi );
    printf( "A Divisão É :[%i]\n", div );
    printf( "O Resto Da Divisão É : [%i]\n", mod );
    
    

    return 0;
}

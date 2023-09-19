#include <stdio.h>;
#include <locale.h>;


int main(void)
{
    /* code */
    setlocale(LC_ALL, "Portuguese");
    double numero1, numero2, resultado;
    char operacao;
    printf("informe o primeiro valor: ");
    scanf("%lf", &numero1);
    printf("informe o segundo valor: ");
    scanf("%lf", &numero2);

    fflush(stdin);

    printf("(+)Somar\n(-)Subtrair\n(*)Multiplicar\n(/)Dividir\nEscolha a operação: ");
    scanf("%c", &operacao);

 switch (operacao) {
    case '+':
        /* code */
        resultado = numero1 + numero2;
        break;
    case'-':
        /* code */
        resultado = numero1 - numero2;
        break;
    case'*':
        /* code */
        resultado = numero1 * numero2;
        break;
     case '/':
        /* code */
        resultado = numero1 / numero2;
     break;
    default:
    break;

 }

 printf("Resultado %.1f", resultado);

    return 0;
}

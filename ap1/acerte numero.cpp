//================================================================
// Descrição: Jogo "Adivinhe o número"
//================================================================
 
// Libs
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Função main
int main(int argc, char** argv)
{
    int n, x,  limite_inferior, limite_superior, acertou, tentativas;
 
    // Inicia o gerador de números aleatórios
    srand(time(NULL));
 
    // Inicaliza as variáveis
    acertou = 0;            // Verifica se o jogador acertou o número
    tentativas = 0;         // Total de tentativas
    limite_inferior = 0;    // Limite inferior
    limite_superior = 101;  // Limite superior
    n = (rand() % 100) + 1; // Número gerado aleatoriamente
 
    // Loop principal
    do {
        // Limpa a tela
        system("cls");
 
        // Imprime o total de tentativas e pede um número ao jogador
        printf("Total de tentativas: %dn", tentativas);
        printf("Digite um numero(Esta entre %d e %d): ", limite_inferior, limite_superior);
        scanf("%d", &x);
 
        // Aumenta em 1 o número de tentativas
        tentativas++;
 
        // Verifica se o jogador ganhou ou diminui os limites ao redor do número
        if(x > n) {
            limite_superior = x;
        } else if(x < n) {
            limite_inferior = x;
        } else {
            acertou = 1;
        }
    }while(!acertou);
 
    // Imprime o resultado após o jogador ganhar o jogo
    system("cls");
    printf("Parabens, o numero e: %dn", n);
    printf("Total de tentativas: %dn", tentativas);
 
    // Pausa o programa até alguma tecla ser pressionada
    system("pause");
    return 0;
}
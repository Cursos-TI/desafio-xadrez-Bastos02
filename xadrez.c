#include <stdio.h>

void MovimentacaoTorre(int numerotorre)
{
    if(numerotorre < 5 )
    {
    printf("-> DIREITA\n");
    MovimentacaoTorre(numerotorre + 1);
    }
}

void Movimentacao(int numerotorre)
{
    if(numerotorre < 5 )
    {
    printf("-> DIREITA\n");
    MovimentacaoTorre(numerotorre + 1);
    }
}



int main() {
    
// MOVIMENTAÇAO DA TORRE
printf("--- MOVIMENTAÇÃO DA TORRE ---\n");

int torre = 0;
MovimentacaoTorre(torre);


// MOVIMENTAÇÃO DO BISPO
int bispo = 0;
printf("--- MOVIMENTAÇÃO DO BISPO ---\n");


while (bispo <5)
{
    printf(" ↑ CIMA-DIREITA ->\n");
    bispo++;
}

// MOVIMENTAÇÃO DA RAINHA
int rainha = 0;
printf("--- MOVIMENTAÇÃO DA RAINHA ---\n");

do 
{

    printf("<- ESQUERDA\n");
    rainha++;
} while (rainha < 8);
    
// MOVIMENTAÇAO DO CAVALO
printf("--- MOVIMENTAÇÃO DO CAVALO ---\n");

int cavalo = 0; 
int cavaloE = 0; 

for (cavalo = 0; cavalo <2; cavalo++)
    {
    printf("↓ BAIXO\n");
    } 
    while(cavaloE < 1)
    {
    printf("<- ESQUERDA\n");
    cavaloE++;
    }

return 0;
}

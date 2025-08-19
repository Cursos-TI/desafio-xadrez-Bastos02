#include <stdio.h>

int main() {
    
// MOVIMENTAÇAO DA TORRE
printf("--- MOVIMENTAÇÃO DA TORRE ---\n");

for (int torre = 0; torre <5; torre++)
    printf("-> DIREITA\n");

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

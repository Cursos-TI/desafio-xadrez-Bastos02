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
    
return 0;
}

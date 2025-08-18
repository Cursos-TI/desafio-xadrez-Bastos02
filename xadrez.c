#include <stdio.h>

int main() {
    
// MOVIMENTAÇAO DA TORRE
int torre = 0;
printf("--- MOVIMENTAÇÃO DA TORRE ---\n");

for(torre; torre <5; torre++)
    printf("-> DIREITA\n");

// MOVIMENTAÇÃO DO BISPO
int bispo = 0;
printf("--- MOVIMENTAÇÃO DO BISPO ---\n");


while (bispo <5)
{
    printf(" ↑ CIMA-DIREITA ->\n");
    bispo++;
}


    return 0;
}

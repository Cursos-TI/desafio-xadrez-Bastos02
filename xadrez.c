#include <stdio.h>

void MovimentacaoTorre(int numerotorre)
{
    if(numerotorre < 5 )
    {
    printf("-> DIREITA\n");
    MovimentacaoTorre(numerotorre + 1);
    }
}

void Movimentacaobispo(int linha, int totaldecasas)
{
    if(linha >= totaldecasas)
    {
        return;
    }

    printf("↑ CIMA\n");
//loop interno
    for(int direita = 0; direita < 1; direita++)
    {
        printf("-> DIREITA\n");
    }

    Movimentacaobispo(linha + 1, totaldecasas);
}


void MovimentacaoRainha(int numerorainha)
{
    if(numerorainha < 8 )
    {
    printf("<- ESQUERDA\n");
    MovimentacaoRainha(numerorainha + 1);
    }
}

int main() {
    
// MOVIMENTAÇAO DA TORRE
printf("--- MOVIMENTAÇÃO DA TORRE ---\n");

int torre = 0;
MovimentacaoTorre(torre);


// MOVIMENTAÇÃO DO BISPO
printf("--- MOVIMENTAÇÃO DO BISPO ---\n");
Movimentacaobispo(0,5);

// MOVIMENTAÇÃO DA RAINHA
printf("--- MOVIMENTAÇÃO DA RAINHA ---\n");

int rainha = 0;
MovimentacaoRainha(rainha);

// MOVIMENTAÇAO DO CAVALO
printf("--- MOVIMENTAÇÃO DO CAVALO ---\n");

//loop externo sobe duas casas
int cavalo = 0; 

for(cavalo = 0; cavalo < 3; cavalo++)
{
    if(cavalo < 2 )
    {
    printf("↑ CIMA\n");
    continue;
    }


//movimentação direita
    int cavaloD = 0; 

    while (cavaloD < 1)
    {
        printf("-> DIREITA\n");
        cavaloD++;
        break;
    }
}

return 0;
}

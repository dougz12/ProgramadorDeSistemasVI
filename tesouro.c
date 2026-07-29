#include <stdio.h>
#define TAM 5
#define tesouros 3
#include <time.h>
#include <stdlib.h>
#include <windows.h>

typedef struct 
{
    char nome[20];
    int tentativas;
}jogador;
void inicializarMapa(char mapa[TAM][TAM]);
void mostrarMapa(char mapa[TAM][TAM]);
void posicionarTesouro(char mapa[TAM][TAM]);
int procurarTesouros(char mapa[TAM][TAM], int *encontrados);
void salvarArquivo(jogador jogador);

int main()
{
    
    char mapa[TAM][TAM];
    jogador jogador;
    int encontrado = 0;
    jogador.tentativas = 0;

    printf("---------------------------\n");
    printf("----Bem-vindo--ao--game----\n");
    printf("---------------------------\n");
    printf("Informe seu nome: ");
    scanf("%s", jogador.nome);

     inicializarMapa(mapa);
     posicionarTesouro(mapa);
    while(encontrado < tesouros){

        mostrarMapa(mapa);
        procurarTesouros(mapa, &encontrado);
        salvarArquivo( jogador);

    }
    
    
    
    return(0);
}
 
void inicializarMapa(char mapa[TAM][TAM]){
    int l,c;

    for(int l = 0; l<TAM; l++){
        for(int c = 0; c<TAM; c++){
            mapa[l][c]= '#';
        }
    }

}
void mostrarMapa(char mapa[TAM][TAM]) {
    printf("\n   ");
    for (int c = 0; c < TAM; c++) {
        printf("%d ", c); // Cabeçalho com o índice das colunas
    }
    printf("\n");

    for (int l = 0; l < TAM; l++) {
        printf("%d  ", l); // Índice das linhas
        for (int c = 0; c < TAM; c++) {
            printf("%c ", mapa[l][c]);
        }
        printf("\n");
    }
}


void posicionarTesouro(char mapa[TAM][TAM]) {
   int aant = -1, bant = -1;
   int a;
   int b;
    for(int i =0; i< 3; i++){
    srand((unsigned int)time(NULL));
    int a = rand() %5;
    int b = rand() %5;
    if(aant == a && bant == b){
        a = rand() %5;
        b= rand() %5;
    } else{
mapa[a][b] = 'T';
    }
    Sleep(1000);
   }
}

int procurarTesouros(char mapa[TAM][TAM], int *encontrados){
      int l,c;
printf("\n linha:");
scanf("%d", &l);

printf("\n Coluna:");
scanf("%d", &c);


if(mapa[l][c] == 'T'){
printf("\aTesouro encontrado!!\n");
Sleep(1000);
mapa[l][c] = 'X';
(*encontrados)++;
return(1);
}
printf("nada encontrado\n");
mapa[l][c] = 'O';
return(1);
    
}

void salvarArquivo(jogador j) {
    FILE *arquivo = fopen("Historico.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar o histórico!\n");
        return;
    }

    fprintf(arquivo, "%s | %d tentativas\n", j.nome, j.tentativas);
    fclose(arquivo);
    printf("Histórico salvo com sucesso em 'Historico.txt'!\n");
}
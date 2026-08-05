#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 8
int navios = 0;

typedef struct 
{
    char nome[50];
    int tentativas;
}Jogador;


void inicializarTabuleiro(char tabuleiro[TAM][TAM]);
void mostrarTabuleiro(char tabuleiro[TAM][TAM]);
void posicionarNavios(char tabuleiro[TAM][TAM]);
int realizarAtaque(char tabuleiro[TAM][TAM]);
void salvarResultado(Jogador j );
void lerResultado();

int main(){
Jogador jogador;
char tabuleiro[TAM][TAM];





inicializarTabuleiro(tabuleiro);
posicionarNavios(tabuleiro);
printf("---------------------\n");
printf("-----Bem-Vindo!-------\n");
printf("---------------------\n");
 
printf("Informe seu nome: ");
scanf("%s", jogador.nome);


do
{
mostrarTabuleiro(tabuleiro);
realizarAtaque(tabuleiro);

printf(" aaaaaa %d\nC",navios);
}while(navios < 3);
salvarResultado(jogador);
  printf("Afundou todos os navios!!");


}

void inicializarTabuleiro(char tabuleiro[TAM][TAM]){

    for(int l = 0; l<TAM; l++){
        for(int c = 0; c<TAM; c++){
            tabuleiro[l][c]= '~';
        }
    }

}



void mostrarTabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n   ");
    for (int c = 0; c < TAM; c++) {
        printf("%d ", c); 
    }
    printf("\n");

    for (int l = 0; l < TAM; l++) {
        printf("%d  ", l); 
        for (int c = 0; c < TAM; c++) {
            printf("%c ", tabuleiro[l][c]);
        }
        printf("\n");
    }
}

void posicionarNavios(char tabuleiro[TAM][TAM]){
    tabuleiro[1][2] = 'N';
    tabuleiro[3][5] = 'N';
    tabuleiro[6][1] = 'N';
}

int realizarAtaque(char tabuleiro[TAM][TAM]){
Jogador jogador;
int l, c;

printf("\n Escolha a linha que deseja atacar: ");
scanf("%d", &l);
if(l < 0, l>7){
    printf("Escolha uma linha valida");

}
printf("\n Escolha a culuna que deseja atacar: ");    
scanf("%d", &c);

if(tabuleiro[l][c] == 'O'){

    printf("Navio ja foi afundado!!");
}
if(c < 0, c >7){
    printf("Escolha uma coluna valida");
   
}

if(tabuleiro[l][c] == 'N'){
    printf("Navio afundado");
    tabuleiro[l][c] = 'O';
     navios++;
    printf("%d", navios);
    
}
if(tabuleiro[l][c] == '~'){
    printf("Errou!!");
    tabuleiro[l][c] = 'S';
} 
jogador.tentativas ++;
}

void salvarResultado(Jogador j) {
    FILE *arquivo = fopen("Historico.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar o histórico!\n");
        return;
    }

    fprintf(arquivo, "%s | %d tentativas\n", j.nome, j.tentativas);
    fclose(arquivo);
    printf("\nHistorico salvo com sucesso em 'Historico.txt'!\n");
}
#include<stdio.h>
 
int main(){
    char nome[15];
    int placar = 0;
    char P1,P2,P3,P4,P5;
    
    printf("==============================\n");
    printf("Bem vindo ao jogo de revisão\n");
    printf("==============================\n");
  
printf("Informe seu nome:\n");
scanf("%[^\n]", nome);



printf("Pergunta 01 - Qual a diferenca entre double e float\n");
printf("A) Sao iguais \n");
printf("B) Ambos usam 4 bits de memoria \n");
printf("C) O float ocupa 4 bits enquando o double ocupa 8 \n");
printf("D) Nenhuma das anteriores \n");
scanf(" %c", &P1);
if (P1 =='C'|| P1 =='c'){
    placar ++;
};

printf("Pergunta 02 - Qual a estrutura devo usar quando não sei o nunmero de interacoes no meu laço\n");
printf("A) Estrutura FOR\n");
printf("B) Estrutura WHILE\n");
printf("C) Estrutura DO WHILE\n");
printf("D) Devemos utilizar o IF\n");
scanf(" %c", &P2);
if (P2 =='B'|| P2 =='b'){
    placar ++;
};

printf("Pergunta 03 - Para que serve o metodo de Newthon-Raphson\n");
printf("A) Para dificultar nossa vida\n");
printf("B) Para calcular a distancia entre um ponto\n");
printf("C) Para aproximar polinomios e encontrar suas raizes\n");
printf("D) Para poder usar o teclado\n");
scanf(" %c", &P3);
if (P3 =='C'|| P3 =='c'){
    placar ++;
};
printf("Pergunta 04 - Dada a preposicao P ^ Q qual a sua tabela verdade\n");
printf("A) |-------------|\n");
printf("   |-P-|-Q-|-P^Q-|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-0-|-1-|--0--|\n");
printf("   |-1-|-0-|--0--|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-------------|\n");

printf("B) |-------------|\n");
printf("   |-P-|-Q-|-P^Q-|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-0-|-1-|--0--|\n");
printf("   |-1-|-0-|--0--|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-------------|\n");

printf("C) |-------------|\n");
printf("   |-P-|-Q-|-P^Q-|\n");
printf("   |-0-|-0-|--1--|\n");
printf("   |-0-|-1-|--0--|\n");
printf("   |-1-|-0-|--1--|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-------------|\n");

printf("D) |-------------|\n");
printf("   |-P-|-Q-|-P^Q-|\n");
printf("   |-0-|-0-|--0--|\n");
printf("   |-0-|-1-|--0--|\n");
printf("   |-1-|-0-|--0--|\n");
printf("   |-1-|-1-|--0--|\n");
printf("   |-------------|\n");

scanf(" %c", &P4);
if (P4 == 'A'|| P4 =='a'){
    placar ++;
};

printf("Pergunta 05 - Para que serve a biblioteca stdio.h\n");
printf("A) Para podermos usar o mouse\n");
printf("B) Para conseguir fazer somas\n");
printf("C) Para podemos usar o teclado\n");
printf("D) Para utilizar as funcoes de saidas e entradas\n");
scanf(" %c", &P5);
if (P5 == 'D'|| P5 =='d'){
    placar ++;
};

if(placar<2){
    printf(" :( %s, voce conseguiu acertar apenas: %d Perguntas, tente mais uma vez!\n", nome, placar);
    printf("Suas respostas:\n");
     printf("1-%c\n", P1);
    printf("2-%c\n", P2);
    printf("3-%c\n", P3);
    printf("5-%c\n", P5);

}
if(placar<5){
    printf(" %s, voce conseguiu acertar: %d Perguntas, tente mais uma vez!\n", nome, placar);
    printf("Suas respostas:\n");
    printf("1-%c\n", P1);
    printf("2-%c\n", P2);
    printf("3-%c\n", P3);
    printf("5-%c\n", P5);
}else{
    printf(":) %s, Parabens voce acertou as %d perguntas!!!\n", nome, placar);
    printf("Suas respostas:\n");
    printf("1-%c\n", P1);
    printf("2-%c\n", P2);
    printf("3-%c\n", P3);
    printf("5-%c\n", P5);
}
}
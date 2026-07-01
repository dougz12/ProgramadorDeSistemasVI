#include <stdio.h>


double soma(double a,double b);
double mult(double a,double b);
double sub(double a,double b);
double divisao(double a,double b);
int fatorialS(int a);
int fatorialD(int a);
double raiz(double a);
void menu();
 
int main() {
 double a = 0, b = 0, m ;
 int c,con = 0; 
do{
    
menu();
        scanf("%lf", &con);


switch (con)
{

case 0:

case 2:
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    printf("O valor da soma eh: %.5lf\n",soma(a,b));
    break;
 
case 5:
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    printf("O valor da subtracao eh: %.5lf\n",sub(a,b));
    break;

    case 7:
        scanf("%lf", &a);
        scanf("%lf", &b);
    printf("O valor da multiplicacao eh: %.5lf\n",mult(a,b));
    break;

case 8:
        scanf("%lf", &c);
       
    printf("A raiz quadrada eh: %.5lf\n",raiz(c));
    break;

case 4:
        scanf("%lf", &a);
        scanf("%lf", &b);
        if(b==0){
printf("Nao e possivel dividir por 0...\n");
        }else{
        
    printf("O valor da divisao eh: %.5lf\n",divisao(a,b));
        }
    break;

    case 3:

    printf("saindo...\n");
    break;

case 9:
        scanf("%d", &c);
    printf("O valor do fatorial eh: %d\n",fatorialD(a));
    break;
case 10:
        scanf("%d", &c);
    printf("O valor do fatorial eh: %d\n",fatorialS(a));
    break;

 default:
        printf("Informe uma opcao valida\n");

}

    
} while (con != 3);

return(0);
}
   

double soma(double a, double b) {
    double r =0.0;
    r =(a + b);
    return(r);
}
double mult(double a, double b) {
    double r =0;
    r =(a * b);
    return(r);
}
double sub(double a, double b) {
    double r =0.0;
    r =(a - b);
    return(r);
}
double divisao(double a, double b) {
    double r =0;
    r =(a / b);
    return(r);
}
int fatorialS(int c) {
    int  r = 1;
    for(int i =c; i>1; i--){
     r = r* i; 
    }
 return(r);
}
int fatorialD(int c) {
    int  r = 1;
    for(int i =c; i>1; i-=2){
     r = r* i; 
    }
 return(r);
}
double raiz(double c){
     if(c<0){
    printf("Nao exite raiz para numeros negativos dentro do conjunto dos numeros reais\n");
    } 
    double xk=c,r;

 for(int i=0; i<100; i++){
    r = 0.5*(xk +(c/xk));
    xk=r;
    
 }
    return(r);
 }


void menu(){
        printf("|---------------------------------------------------------------------------------------------------------------------------|\n");
        printf("|Bem vindo a Calculadora 1.0................................................................................................|\n");
        printf("|Escolha uma opcao..........................................................................................................|\n");
        printf("|---------------------------------------------------------------------------------------------------------------------------|\n");
        printf("| 0 - MDC...................................................................................................................|\n");
        printf("| 1 - MMC...................................................................................................................|\n");
        printf("| 2 - Soma..................................................................................................................|\n");
        printf("| 3 - Sair..................................................................................................................|\n");
        printf("| 4 - Divisao...............................................................................................................|\n");
        printf("| 5 - Subtracao.............................................................................................................|\n");
        printf("| 6 - Potenciacao...........................................................................................................|\n");
        printf("| 7 - Multiplicacao.........................................................................................................|\n");
        printf("| 8 - Raiz Quadrada.........................................................................................................|\n");
        printf("| 9 - Fatorial Duplo (N!!) .................................................................................................|\n");
        printf("| 10 - Fatorial Simples (N!) ...............................................................................................|\n");
        printf("| 11 - Equacao do Segundo Grau..............................................................................................|\n");
        printf("----------------------------------------------------------------------------------------------------------------------------|\n");
    }

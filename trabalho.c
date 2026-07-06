#include <stdio.h>
int MMC(int a, int b);
int MDC(int a, int b);
double potencia(double a, double b);
double soma(double a,double b);
double mult(double a,double b);
double sub(double a,double b);
double divisao(double a,double b);
int fatorialS(int a);
int fatorialD(int a);
double raiz(double a);
double equacao(double a,double b,double c);
void menu();

 
int main() {
 double a = 0, b = 0, m ;
 int c, d, con = 0; 
do{
    
menu();
        scanf("%d", &con);


switch (con)
{

    case 0:

        printf("Informe dois numeros inteiros para calcular o MDC:\n");
    scanf("%d", &c);
    scanf("%d", &d);

    printf("O MDC de %d e %d eh: %d\n", c, d, MDC(c, d));
break;

    case 1:
        printf("Informe dois numeros inteiros para calcular o MMC:\n");
    scanf("%d", &c);
    scanf("%d", &d);

    printf("O MMC de %d e %d eh: %d\n", c, d, MMC(c, d));
break;
    
    case 2:
        printf("Informe dois numeros para calcular a soma:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    printf("O valor da soma eh: %.5lf\n",soma(a,b));
    break;
    case 3:

    printf("saindo...\n");
    break;

    case 4:
printf("Informe dois numeros para calcular a divisao:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        if(b==0){
printf("Nao e possivel dividir por 0...\n");
        }else{
        
    printf("O valor da divisao eh: %.5lf\n",divisao(a,b));
        }
    break;

    case 5:
printf("Informe dois numeros para calcular a subtracao:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    printf("O valor da subtracao eh: %.5lf\n",sub(a,b));
    break;

    case 6:
        printf("Informe a base e o expoente:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);

        printf("O valor da potencia eh: %.5lf\n", potencia(a, b));
        break;
        
    case 7:
    printf("Informe dois numeros para calcular a multiplicacao:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
    printf("O valor da multiplicacao eh: %.5lf\n",mult(a,b));
    break;
    
    case 8:
printf("Informe um numero para calcular a raiz quadrada:\n");        
scanf("%lf", &a);
       
    printf("A raiz quadrada eh: %.5lf\n",raiz(a));
    break;

    case 9:
printf("Informe um numero para calcular o fatorial duplo:\n");
        scanf("%d", &c);
    printf("O valor do fatorial eh: %d\n",fatorialD(c));
    break;

    case 10:
printf("Informe um numero para calcular o fatorial simples:\n");
        scanf("%d", &c);
    printf("O valor do fatorial eh: %d\n",fatorialS(c));
    break;

    case 11:
printf("Informe os coeficientes a, b e c da equacao do segundo grau:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &m);
    equacao(a,b,m);
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
    if(c==0){
        return(0);
    } 
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

double potencia(double a, double b){
        double r = 1;
        
        for (int i = 0; i < b; i ++){
            r = r * a;
        }
        return(r);
    }
int MDC(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
        
        
    }
    return a;
}
int MMC(int a, int b) {
    return (a * b) / MDC(a, b);
}
double equacao(double a,double b,double m){
    double delta = (b*b) - (4*a*m);
    if(delta<0){
        printf("Nao existe raiz real para essa equacao\n");
        return 0;
    }else{
        double x1 = (-b + raiz(delta)) / (2*a);
        double x2 = (-b - raiz(delta)) / (2*a);
        printf("As raizes da equacao sao: %.5lf e %.5lf\n", x1, x2);
        return 1;
    }
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

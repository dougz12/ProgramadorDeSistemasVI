#include <stdio.h>
#include <windows.h>

double soma(double a,double b);
double mult(double a,double b);
double sub(double a,double b);
double divisao(double a,double b);
void menu();
 
int main() {
 double a = 0, b=0,m;
 int con = 0;
do{
    system("cls");
menu();
        scanf("%d", &con);


switch (con)
{
case 1:
        scanf("%lf", &a);
        scanf("%lf", &b);
        
    printf("O valor da soma eh: %lf\n",soma(a,b));
    break;
 
case 2:
        scanf("%lf", &a);
        scanf("%lf", &b);
    printf("O valor da subtracao eh: %lf\n",sub(a,b));
    break;

case 3:
        scanf("%lf", &a);
        scanf("%lf", &b);
    printf("O valor da multiplicacao eh: %lf\n",mult(a,b));
    break;

case 4:
        scanf("%lf", &a);
        scanf("%lf", &b);
        if(b==0){
printf("Nao e possivel dividir por 0...\n");
        }else{
        
    printf("O valor da divisao eh: %lf\n",divisao(a,b));
        }
    break;

    case 5:

    printf("saindo...\n");
    break;

 default:
        printf("Informe uma opcao valida\n");

}

    
} while (con != 5);

return(0);
}
   

double soma(double a, double b) {
    double r =0;
    r =(a + b);
    return(r);
}
double mult(double a, double b) {
    double r =0;
    r =(a * b);
    return(r);
}
double sub(double a, double b) {
    double r =0;
    r =(a - b);
    return(r);
}
double divisao(double a, double b) {
    double r =0;
    r =(a / b);
    return(r);
}
void menu(){
    
    printf("=== CALCULADORA ===\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair \n");
        printf("Escolha uma opcao: ");
        
       
}

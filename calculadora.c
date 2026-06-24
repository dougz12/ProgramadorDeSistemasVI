#include <stdio.h>
#include <windows.h>

int soma(int a,int b);
int mult(int a,int b);
int sub(int a,int b);
int divisao(int a,int b);
void menu();
 
int main() {
 int con = 0, a = 0, b=0,m;
do{
    system("cls");
menu();
        scanf("%d", &con);


switch (con)
{
case 1:
        scanf("%d", &a);
        scanf("%d", &b);
        
    printf("O valor da soma eh: %d\n",soma(a,b));
    break;
 
case 2:
        scanf("%d", &a);
        scanf("%d", &b);
    printf("O valor da subtracao eh: %d\n",sub(a,b));
    break;

case 3:
        scanf("%d", &a);
        scanf("%d", &b);
    printf("O valor da multiplicacao eh: %d\n",mult(a,b));
    break;

case 4:
        scanf("%d", &a);
        scanf("%d", &b);
        if(b==0){
printf("Nao e possivel dividir por 0...\n");
        }else{
        
    printf("O valor da divisao eh: %d\n",divisao(a,b));
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
   

int soma(int a, int b) {
    int r =0;
    r =(a + b);
    return(r);
}
int mult(int a, int b) {
    int r =0;
    r =(a * b);
    return(r);
}
int sub(int a, int b) {
    int r =0;
    r =(a - b);
    return(r);
}
int divisao(int a, int b) {
    int r =0;
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

#include <stdio.h>
#include <stdlib.h>
#include <C:\msys64\mingw64\include\libpq-fe.h>

int main(){
    char produto[15];
    int quantidade = 0;
    double preco = 0.0;
    PGresult *res = NULL;

    const char *connfinfo = "host=localhost port=5432 dbname=estoque user=postgres password=admin";

    PGconn * conn = PQconnectdb(connfinfo);

    if(PQstatus(conn) != CONNECTION_OK){
        fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
        PQfinish(conn);
        return 1;
    }

    printf("Conectado ao banco com sucesso!\n" );

    printf("informe o nome:");
    scanf("%s", produto);
    printf("Informe a quantidade: ");
        scanf("%s", &quantidade);
    printf("Informe o valor : ");
    scanf("%s", &preco);

    char *sql = malloc(256 * sizeof(char));

    sprintf(sql, "INSERT INTO estoque (produto, quantidade, preco_unitario) VALUES('%s', '%d', %2.lf); produto, quantidade, preco");
    res = PQexec(conn,sql);

    if(PQresultStatus(res) != PGRES_COMMAND_OK){
        fprintf(stderr, "Erro no INSERT: %s\n", PQerrorMessage(conn));
        PQclear(res);
        PQfinish(conn);
        return 1;
    }

    printf("Insercao realizada com sucesso!\n");
    free(sql);
    PQclear(res);
    PQfinish(conn);
    return 0;

}
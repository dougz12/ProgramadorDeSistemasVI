#include <stdio.h>
#include <stdlib.h>
#include <C:\msys64\mingw64\include\libpq-fe.h>

int main(){
const char *conninfo = "host=localhost port=5432 dbname=estoque user=postgres password=admin";
PGconn *conn = PQconnectdb(conninfo);

if (PQstatus(conn)== CONNECTION_BAD){
    fprintf(stderr, "Erro de conexão: %s\n", PQerrorMessage(conn));
    PQfinish(conn);
    return 1;
}

printf("Conectado ao PostgreeSQL com sucesso! \n\n");
PQfinish(conn);

return 0;
}
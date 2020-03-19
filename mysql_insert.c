#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    MYSQL *conn;
    char *server = "127.0.0.1";
    char *user = "root";
    char *password = "";
    char *database = "ecommerce";
    char    emailaddress[30] = "test@gmail.com",
            upassword[30] = "password",
            deliveryaddress[255] = "123 Main st",
            sqlquery[255];

    conn = mysql_init(NULL);
    if (!mysql_real_connect(conn, server, user, password, database, 0,
                            NULL, 0))
    {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    strcpy(sqlquery, "INSERT INTO users(email, passw, address) VALUES (\'");
    strcat(sqlquery, emailaddress);
    strcat(sqlquery, "\', \'");
    strcat(sqlquery, upassword);
    strcat(sqlquery, "\', \'");
    strcat(sqlquery, deliveryaddress);
    strcat(sqlquery, "\')");
    if (mysql_query(conn, sqlquery) != 0)
    {
        fprintf(stderr, "Row could not be inserted into users table\n");
        exit(1);
    }
    printf("Row is inserted successfully in users table\n");
    mysql_close(conn);
}
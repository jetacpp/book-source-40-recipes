project(recipes)

add_executable(pipe pipe.c)
add_executable(pipe_write pipe_write.c)
add_executable(pipe_read pipe_read.c)

add_executable(tcp_server tcp_server.c)
add_executable(tcp_client tcp_client.c)

add_executable(udp_server udp_server.c)
add_executable(udp_client udp_client.c)

add_executable(msgq_send msgq_send.c)
add_executable(msgq_recv msgq_recv.c)

add_executable(shm_read shm_read.c)
add_executable(shm_write shm_write.c)

add_executable(mysql_display mysql_display.c)
target_link_libraries(mysql_display mysqlclient)

add_executable(mysql_insert mysql_insert.c)
target_link_libraries(mysql_insert mysqlclient)

add_executable(mysql_search mysql_search.c)
target_link_libraries(mysql_search mysqlclient)

add_executable(mysql_update mysql_update.c)
target_link_libraries(mysql_update mysqlclient)

add_executable(mysql_delete mysql_delete.c)
target_link_libraries(mysql_delete mysqlclient)
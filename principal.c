#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int num, i;
    printf("Insira o número de execuções: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            execl("./hello_world", "hello_world", NULL);
            perror("Falha no execl.\n");
            exit(1);} 
            
        if (pid > 0) {
            printf("Execução do processo pai.\n");} 
        
        if (pid < 0){
            perror("Falha no fork.");}}
    return 0;}

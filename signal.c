#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int a = 1;
void holaMundo(int signalNumber){
    if(signalNumber == 10){
        printf("Es la senal 10\n");
    } else {
        printf("Es otra senal");
    }
    a = 2; 
}
void noMeMatas(int sig){
    printf("\nXDDDD, te la comes perro\n");
}
int main(){
    signal(10,holaMundo);

    while(a==1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}
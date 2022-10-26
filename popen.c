#include <stdio.h>

int main(){
    char *cadenas[10];
    FILE *sort;
    cadenas[0]= "hola";
    cadenas[1]= "otra";
    cadenas[2]= "ya";
    cadenas[3]= "fin";

    sort = popen("sort","w");
    for (int i = 0;i < 4;i++){
        fprintf(sort,"%s\n",cadenas[i]);
    }
    pclose(sort);
}
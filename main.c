#include "list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int tam, tam_max;
    scanf("%d\n", &tam);
    tam_max = tam*2;

    char str_aux[tam_max], *str_split;
    fgets(str_aux, sizeof(str_aux), stdin);
    str_split = strtok(str_aux, " ");

    List *l;
    create(&l);

    int i = 0, vet[tam];
    while(str_split != NULL){
        // printf("%s", str_split);
        if (!check_elem(l, atoi(str_split)))
            insert(l, atoi(str_split));
        str_split = strtok(NULL, " ");
    }

    print_list(l);
    
    return 0;
}
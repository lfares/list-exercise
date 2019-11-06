#include "list.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LIST_SIZE 100

int main(){
    int n;
    scanf("%d\n", &n);

    char str_aux[n*4], *str_split;
    fgets(str_aux, sizeof(str_aux), stdin);
    str_split = strtok(str_aux, " ");

    List *l;
    create(&l);

    while(str_split != NULL){
        if (!check_elem(l, atoi(str_split)))
            insert(l, atoi(str_split));
        str_split = strtok(NULL, " ");
    }

    if (check_size(l) >= LIST_SIZE)
        printf("Lista cheia. Impossivel realizar o processamento.\n");
    else
        print_list(l, n);
    
    return 0;
}
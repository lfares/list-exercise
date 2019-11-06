#include <stdlib.h>
#include <stdio.h>
#include "list.h"

struct node {
    elem info;
    struct node *prox;
};

struct list {
    Node *begin, *end;
};

void create(List **l) {
    *l = malloc(sizeof(List)); 
    (*l)->begin = NULL;
    (*l)->end = NULL;
    return;
}

void destroy(List **l) {
    // erase all elements
    Node *aux;
    while ((*l)->begin != NULL) {
        aux = (*l)->begin;
        (*l)->begin = (*l)->begin->prox;
        free(aux);
    }
    // free list
    free(*l);
    *l = NULL;
    return;
}
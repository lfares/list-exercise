#include <stdlib.h>
#include <stdio.h>
#include "list.h"

struct node {
    elem info;
    struct node *next;
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
        (*l)->begin = (*l)->begin->next;
        free(aux);
    }
    // free list
    free(*l);
    *l = NULL;
    return;
}

void insert(List *l, elem x) {
    Node *aux;
    aux = malloc(sizeof(Node));
    aux->info = x;
    aux->next = NULL;
    if (l->end != NULL)
        l->end->next = aux;
    l->end = aux;
    if (l->begin == NULL)
        l->begin = aux;
    return;
}

void print_list(List *l, int tam) {
    Node *aux = l->begin;
    while (aux != NULL) {
        printf("%d\t", aux->info);
        aux = aux->next;
    }
    printf("\nTamanho da lista: %d\n", check_size(l));
    printf("Total de comparações: %d\n", tam);
    return;
}

int check_size(List *l) {
    Node *aux = l->begin;
    int count = 0;
    while (aux != NULL) {
        count++;
        aux = aux->next;
    }
    return count;
}

int check_elem(List *l, elem x) {
    Node *aux = l->begin;
    while (aux != NULL) {
        if (aux->info == x)
            return 1; 
        aux = aux->next;
    }
    return 0; 
}

typedef int elem;
typedef struct node Node;
typedef struct list List;

void create(List **l);
void destroy(List **l);
void insert(List *l, elem x);
void print_list(List *l, int tam);
int check_size(List *l);
int check_elem(List *l, elem x);
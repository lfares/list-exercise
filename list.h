typedef char elem;
typedef struct node Node;
typedef struct list List;

void create(List **l);
void destroy(List **l);
void insert(List *l, elem x);
void print(List *l);
int check_size(List *l);
int check_elem(List *l, elem x);
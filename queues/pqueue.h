typedef struct node {
    int val;
    int weight;
    struct node* next;
} Node;

Node* make_node(int val, int weight);
void sortedAppend(Node** head, int val, int weight);
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} node_t;

void print_data(node_t *list) {
    if (list == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    node_t *ptr = list;
    int m = 1;
    while (ptr != NULL) {
        printf("At node %d value is %d\n", m, ptr->data);
        ptr = ptr->link;
        m++;
    }
}

void insert_node(node_t **list) {
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int data;
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &data);

        node_t *temp = malloc(sizeof(node_t));
        if (temp == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
        temp->data = data;
        temp->link = NULL;

        if (*list == NULL) {
            *list = temp;
        } else {
            node_t *ptr = *list;
            while (ptr->link != NULL) {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
}

int main() {
    node_t *list = NULL;

    insert_node(&list);
    print_data(list);

    return 0;
}

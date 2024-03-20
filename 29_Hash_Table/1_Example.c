#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 10
#define MENU "--------------------------------\n"\
             "1. Insert The Data\n" \
             "2. Delete The Data\n" \
             "3. Search Data from table\n" \
             "4. Display Data\n" \
             "5. Exiting from hash table\n" \
             "--------------------------------\n"

typedef struct node {
    int data;
    struct node *link;
} node_t;

typedef struct hash_table_t {
    node_t *bucket[SIZE];
} hash_table_t;

hash_table_t *hash() {
    hash_table_t *hash = (hash_table_t *)malloc(sizeof(hash_table_t));
    if (hash == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < SIZE; i++) {
        hash->bucket[i] = NULL;
    }
    return hash;
}

int hash_function(int key) {
    return key % SIZE;
}

void hash_insert(hash_table_t *hash, int data) {
    int key = hash_function(data);
    node_t *newnode = (node_t *)malloc(sizeof(node_t));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    newnode->data = data;
    newnode->link = NULL;

    if (hash->bucket[key] == NULL) {
        hash->bucket[key] = newnode;
    } else {
        node_t *temp;
        temp = hash->bucket[key];
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = newnode;
    }
}

void hash_display(hash_table_t *hash) {
    for (int i = 0; i < SIZE; i++) {
        printf("Bucket %d:", i);
        node_t *temp = hash->bucket[i];
        while (temp != NULL) {
            printf(" %d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void hash_search(hash_table_t *hash, int data) {
    int key = hash_function(data);
    node_t *temp = hash->bucket[key];
    while (temp != NULL && temp->data != data) {
        temp = temp->link;
    }
    if (temp == NULL) {
        printf("Data not Found!!!\n");
    } else {
        printf("Data %d Found at Bucket %d.\n", data, key);
    }
}

void hash_delete(hash_table_t *hash, int data) {
    int key = hash_function(data);
    node_t *temp = hash->bucket[key];
    node_t *prev = NULL;

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("Data not Found!!!\n");
        return;
    }

    if (prev == NULL) {
        hash->bucket[key] = temp->link;
    } else {
        prev->link = temp->link;
    }
    free(temp);
}

int main(void) {

    hash_table_t *hash1 = hash();
    uint8_t choice;
    int data;
    do {
        printf("%s", MENU);
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Insert The Data: ");
                scanf("%d", &data);
                hash_insert(hash1, data);
                break;
            case 2:
                printf("Delete The Data: ");
                scanf("%d", &data);
                hash_delete(hash1, data);
                break;
            case 3:
                printf("Search The Data: ");
                scanf("%d", &data);
                hash_search(hash1, data);
                break;
            case 4:
                printf("Display the data of Hash Table\n");
                hash_display(hash1);
                break;
            default:
                printf("Invalid Input!!!!\n");
                break;
        }
    } while (choice != 5);

    // Free dynamically allocated memory
    for (int i = 0; i < SIZE; i++) {
        node_t *temp = hash1->bucket[i];
        while (temp != NULL) {
            node_t *next = temp->link;
            free(temp);
            temp = next;
        }
    }
    free(hash1);

    return 0;
}

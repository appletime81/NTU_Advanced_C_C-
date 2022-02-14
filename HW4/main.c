#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct _node {
    char name[128];
    char email[128];
    int phoneNum;
    struct _node *next;
};
typedef struct _node node;

node *getnode() {
    node *p;
    p = (node *) malloc(sizeof(node));

    if (p == NULL) {
        printf("?????");
        exit(1);
    }
    return p;
}

void freenode(node *p) {
    free(p);
}

node *insert_node (node *head, node, *ptr, node input) {
    node *new_node;
    new_node = getnode();
    *new_node = input;
    new_node->next = NULL;

    if (ptr == NULL) {
        new_node->next = head;
        head = new_node;
    } else {
        if (ptr->next = NULL) {
            ptr->next = new_node;
        } else {
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
    }
    return head;
}


int main() {

    return 0;
}

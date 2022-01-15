#include <stdio.h>
#include <stdlib.h>

struct _node {
    int data;
    struct _node *next;
};
typedef struct _node node;


int main()
{
    node *head, *ptr;
    int value;
    head = NULL;

    while (1) {
        scanf("%d", &value);
        if (value == -1) {
            break;
        }
        if (head == NULL) {
            head = (node *)malloc(sizeof(node));
            head->next = NULL;
        } else {
            head = (node *)malloc(sizeof(node));
            head->next = ptr;
        }
        head->data = value;
        ptr = head;
    }

    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

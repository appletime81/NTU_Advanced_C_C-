#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void insert_func(void);

void sort_func(void);

void delete_func(void);

void display_func(void);

void modify_func(void);

void flashBuffer(void);

struct student {
    char name[20];
    int score;
    struct student
            *next;
};
struct student *ptr,
        *head,
        *current,
        *prev, *modifyNode;

int main() {
    char option1;
    head = (struct student *) malloc(sizeof(struct student));
    head->next = NULL;
    while (1) {
        printf("\n");
        printf("1");
        printf("2");
        printf("3");
        printf("4");
        printf("5");
        option1 = getchar();
        flashBuffer();
        switch (option1) {
            case '1':
                insert_func();
                break;
            case '2':
                delete_func();
                break;
            case '3':
                modify_func();
                break;
            case '4':
                display_func();
                break;
            case '5':
                printf("In");
                return 0;
            default:
                printf("錯誤選項，請重新選擇n");
        }
    }
}

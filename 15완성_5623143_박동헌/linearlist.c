#include <stdio.h>
#include <string.h>
#include "linearlist.h"

void initList(ContactList* list) {
    list->size = 0;
}

int add(ContactList* list, const char* name, const char* phone) {
    if (list->size >= MAX_LIST_SIZE) return 0;

    strcpy(list->data[list->size].name, name);
    strcpy(list->data[list->size].phone, phone);
    list->size++;
    return 1;
}

int delete(ContactList* list, const char* name) {
    for (int i = 0; i < list->size; i++) {
        if (strcmp(list->data[i].name, name) == 0) {
            for (int j = i; j < list->size - 1; j++) {
                list->data[j] = list->data[j + 1];
            }
            list->size--;
            return 1;
        }
    }
    return 0;
}

int search(const ContactList* list, const char* name) {
    for (int i = 0; i < list->size; i++) {
        if (strcmp(list->data[i].name, name) == 0) {
            printf("이름: %s, 전화번호: %s\n", list->data[i].name, list->data[i].phone);
            return 1;
        }
    }
    return 0;
}

void print(const ContactList* list) {
    printf("----- 전체 연락처 -----\n");
    if (list->size == 0) {
        printf("등록된 연락처가 없습니다.\n");
        return;
    }
    for (int i = 0; i < list->size; i++) {
        printf("[%d] 이름: %s, 전화번호: %s\n", i + 1, list->data[i].name, list->data[i].phone);
    }
    printf("--------------------\n");
}

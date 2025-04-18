#ifndef LINEARLIST_H
#define LINEARLIST_H

#define MAX_LIST_SIZE 100
#define NAME_LEN 30
#define PHONE_LEN 20

typedef struct {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} Contact;

typedef struct {
    Contact data[MAX_LIST_SIZE];
    int size;
} ContactList;

void initList(ContactList* list);
int add(ContactList* list, const char* name, const char* phone);
int delete(ContactList* list, const char* name);
int search(const ContactList* list, const char* name);
void print(const ContactList* list);

#endif

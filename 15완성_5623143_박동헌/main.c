#include <stdio.h>
#include <string.h>
#include "linearlist.h"

int main() {
    ContactList list;
    initList(&list);

    int choice;
    char name[NAME_LEN];
    char phone[PHONE_LEN];

    while (1) {
        printf("===== ��ȭ��ȣ�� �޴� =====\n");
        printf("1. ����ó �߰�\n");
        printf("2. ����ó ����\n");
        printf("3. ����ó �˻�\n");
        printf("4. ��ü ����ó ���\n");
        printf("0. ����\n");
        printf("�޴��� �����ϼ���: ");
        scanf_s("%d", &choice);
        getchar();
    
        if (choice == 1) {
            printf("�̸��� �Է��ϼ���: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            printf("��ȭ��ȣ�� �Է��ϼ���: ");
            fgets(phone, PHONE_LEN, stdin);
            phone[strcspn(phone, "\n")] = '\0';
    
            add(&list, name, phone);
            printf("����ó�� �߰��Ǿ����ϴ�.\n");
        }

        else if (choice == 2) {
            printf("������ �̸��� �Է��ϼ���: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            delete(&list, name);
            printf("�����Ǿ����ϴ�.\n");
        }

        else if (choice == 3) {
            printf("�˻��� �̸��� �Է��ϼ���: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            if (!search(&list, name))
                printf("����ó�� ã�� �� �����ϴ�.\n");
        }

        else if (choice == 4) {
            print(&list);
        }

        else if (choice == 0) {
            printf("���α׷��� �����մϴ�.\n");
            return 0;
        }

        else {
            printf("���ڸ� �߸� �Է��߽��ϴ�.\n");
        }
        printf("\n");
    }
}

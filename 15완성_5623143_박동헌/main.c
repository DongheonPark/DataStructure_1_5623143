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
        printf("===== 전화번호부 메뉴 =====\n");
        printf("1. 연락처 추가\n");
        printf("2. 연락처 삭제\n");
        printf("3. 연락처 검색\n");
        printf("4. 전체 연락처 출력\n");
        printf("0. 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf_s("%d", &choice);
        getchar();
    
        if (choice == 1) {
            printf("이름을 입력하세요: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            printf("전화번호를 입력하세요: ");
            fgets(phone, PHONE_LEN, stdin);
            phone[strcspn(phone, "\n")] = '\0';
    
            add(&list, name, phone);
            printf("연락처가 추가되었습니다.\n");
        }

        else if (choice == 2) {
            printf("삭제할 이름을 입력하세요: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            delete(&list, name);
            printf("삭제되었습니다.\n");
        }

        else if (choice == 3) {
            printf("검색할 이름을 입력하세요: ");
            fgets(name, NAME_LEN, stdin);
            name[strcspn(name, "\n")] = '\0';
    
            if (!search(&list, name))
                printf("연락처를 찾을 수 없습니다.\n");
        }

        else if (choice == 4) {
            print(&list);
        }

        else if (choice == 0) {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }

        else {
            printf("숫자를 잘못 입력했습니다.\n");
        }
        printf("\n");
    }
}

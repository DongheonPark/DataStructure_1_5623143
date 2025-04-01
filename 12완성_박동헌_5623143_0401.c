#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fibo_rec(int n) {
    if(n==0) return 0;
    else if (n==1) return 1;
    else {
        return (fibo_rec(n-1) + fibo_rec(n-2));
    }
}

int fibo_itr(int n) {
    int f_n_2 = 0;
    int f_n_1 = 1;
    int f_n;

    for(int i=2; i<=n; i++) {
        f_n = f_n_1 + f_n_2;
        f_n_2 = f_n_1;
        f_n_1 = f_n;
    }

    if(n==0) return f_n_2;
    else if (n==1) return f_n_1;
    else return f_n;
}

int main() {
    int menu, number;
    
    while (true) {
        printf("�Ǻ���ġ ���� ��� ���� (1: �����, 2: ��ȯ��, 0: ����): ");
        scanf_s("%d", &menu);

        if (menu == 0) {
            printf("���α׷��� ����Ǿ����ϴ�.\n");
            exit(0);
        }
        else if (menu == 1 || menu == 2) {
            printf("���� N�� �Է��ϼ��� (�����Ϸ��� 0 �Է�): ");
            scanf_s("%d", &number);
        }
        else {
            printf("���� �̿��� ���ڸ� �Է��߽��ϴ�.\n");
        }

        if (menu == 1) {
            printf("F(%d) = %d (����� ���)\n", number, fibo_rec(number));
        }
        else if (menu == 2) {
            printf("F(%d) = %d (��ȯ�� ���)\n", number, fibo_itr(number));
        }
    }
    
    return 0;
}
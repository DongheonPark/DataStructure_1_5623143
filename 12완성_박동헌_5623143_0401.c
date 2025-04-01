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
        printf("피보나치 수열 방법 선택 (1: 재귀적, 2: 순환적, 0: 종료): ");
        scanf_s("%d", &menu);

        if (menu == 0) {
            printf("프로그램이 종료되었습니다.\n");
            exit(0);
        }
        else if (menu == 1 || menu == 2) {
            printf("정수 N을 입력하세요 (종료하려면 0 입력): ");
            scanf_s("%d", &number);
        }
        else {
            printf("범위 이외의 숫자를 입력했습니다.\n");
        }

        if (menu == 1) {
            printf("F(%d) = %d (재귀적 방법)\n", number, fibo_rec(number));
        }
        else if (menu == 2) {
            printf("F(%d) = %d (순환적 방법)\n", number, fibo_itr(number));
        }
    }
    
    return 0;
}
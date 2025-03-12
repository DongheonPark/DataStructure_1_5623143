#include <stdio.h>

int main() {
    int num;

    printf("정수를 입력하세요: ");
    scanf_s("%d", &num);

    printf("입력된 정수의 32비트 표현: ");
    for (int i = 31; i >= 0; i--) { // i는 31부터 시작하여 0까지 감소
        int change = num >> i & 1; // and 1을 이용하여 비트 추출
        printf("%d", change);
    }
}
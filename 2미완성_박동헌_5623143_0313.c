//부호 부분만 완성하였습니다..

#include <stdio.h>

int main() {
    float number;

    unsigned int change_bit; // float number를 unsigned int로 저장
    // unsigned int change_jisu;
    // unsigned int change_gasu;

    int buho_bit; // 부호 판별 변수
    int buho_print; // 부호 출력 변수

    printf("실수를 입력하세요: ");
    scanf_s("%f", &number);

    change_bit = *(unsigned int *) & number;
    
    buho_bit = (change_bit >> 31) & 1; // 부호 비트는 31번째이므로 31

    if (buho_bit == 0) {
        buho_print = 0;
    } else {
        buho_print = 1;
    }
    printf("부호 (1비트) : %d\n", buho_print);

    return 0;
}
//��ȣ �κи� �ϼ��Ͽ����ϴ�..

#include <stdio.h>

int main() {
    float number;

    unsigned int change_bit; // float number�� unsigned int�� ����
    // unsigned int change_jisu;
    // unsigned int change_gasu;

    int buho_bit; // ��ȣ �Ǻ� ����
    int buho_print; // ��ȣ ��� ����

    printf("�Ǽ��� �Է��ϼ���: ");
    scanf_s("%f", &number);

    change_bit = *(unsigned int *) & number;
    
    buho_bit = (change_bit >> 31) & 1; // ��ȣ ��Ʈ�� 31��°�̹Ƿ� 31

    if (buho_bit == 0) {
        buho_print = 0;
    } else {
        buho_print = 1;
    }
    printf("��ȣ (1��Ʈ) : %d\n", buho_print);

    return 0;
}
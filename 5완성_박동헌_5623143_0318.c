/* 
��Ģ���꿡 �ش��ϴ� 4���� ����� ������ �Լ��� �ο��߽��ϴ�.
Ư�� �Ű��� �� �κ��� ���������� �����ߴµ�, 0���δ� ���� �� ���⿡ 
0�� �ԷµǸ� ��� �޽����� 0�� ��ȯ�ϵ��� �߽��ϴ�.
���� �Ҽ��� �����̱⿡ float�� ����߰�, ����ڷκ��� �Է¹޴� num1�� num2��
int���̱⿡, float�� ��ȯ�ǵ��� ���� ����ȯ�� ����߽��ϴ�.
*/

#include <stdio.h>

int add(int num1, int num2) { // ���� �Լ�
    return num1 + num2;
}
    
int sub(int num1, int num2) { // ���� �Լ�
    return num1 - num2;
}
    
int mul(int num1, int num2) { // ���� �Լ�
    return num1 * num2;
}

float div(int num1, int num2) { // ������ �Լ�
    if (num2 == 0) { // num2�� 0�� ���� �������� ���� �Ұ�
        printf("0�� ����� �� ���� ���Դϴ�.\n");
        return 0.0f; // 0�� ��ȯ�ϳ� float �����̾�� �ϱ⿡ "0.0f" �� �ۼ�
    } else {
        return (float) num1 / num2; // num2�� 0�� �ƴϸ� ���������� �������� �����ϹǷ� ����
    }
}

int main() {
    int num1, num2;

    printf("ù ��° ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &num1);

    printf("�� ��° ���� ������ �Է��ϼ���: ");
    scanf("%d", &num2);

    printf("����: %d\n", add(num1, num2));
    printf("����: %d\n", sub(num1, num2));
    printf("����: %d\n", mul(num1, num2));
    printf("������: %.2f\n", div(num1, num2));
    
    return 0;
}  
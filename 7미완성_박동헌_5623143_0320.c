/* 
�̿ϼ�, ������� �ùٸ��� ����
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

float running(int num1, char c1, int num2, char c2, int num3, char c3, int num4, char c4, int num5) {
    int result = 0;

    if (c1 == '+') result  = add(num1, num2);
    else if (c1 == '-') result = sub(num1, num2);
    else if (c1 == '*') result = mul(num1, num2);
    else if (c1 == '/') result = div(num1, num2);

    if (c2 == '+') result  = add(result, num2);
    else if (c1 == '-') result = sub(result, num2);
    else if (c1 == '*') result = mul(result, num2);
    else if (c1 == '/') result = div(result, num2);

    if (c3 == '+') result  = add(result, num2);
    else if (c1 == '-') result = sub(result, num2);
    else if (c1 == '*') result = mul(result, num2);
    else if (c1 == '/') result = div(result, num2);

    if (c4 == '+') result  = add(result, num2);
    else if (c1 == '-') result = sub(result, num2);
    else if (c1 == '*') result = mul(result, num2);
    else if (c1 == '/') result = div(result, num2);

    return result;
}


int main() {
    int num1, num2, num3, num4, num5;
    char c1, c2, c3, c4;

    /* ���
    ����� ������ �Է��ϼ��� (��: 3 + 5 * 2 - 8 / 4): 
    ���: 59.000000
    */

    printf("����� ������ �Է��ϼ��� (��: 3 + 5 * 2 - 8 / 4): ");
    scanf("%d %c %d %c %d %c %d %c %d", &num1, &c1, &num2, &c2, &num3, &c3, &num4, &c4, &num5);
   
    float result = running(num1, c1, num2, c2, num3, c3, num4, c4, num5);

    printf("���: %.6f\n", result);
    return 0;
}  
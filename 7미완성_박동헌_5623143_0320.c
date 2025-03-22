/* 
미완성, 결과값이 올바르지 않음
*/

#include <stdio.h>

int add(int num1, int num2) { // 덧셈 함수
    return num1 + num2;
}
    
int sub(int num1, int num2) { // 뺄셈 함수
    return num1 - num2;
}
    
int mul(int num1, int num2) { // 곱셈 함수
    return num1 * num2;
}

float div(int num1, int num2) { // 나눗셈 함수
    if (num2 == 0) { // num2에 0이 오면 나눗셈은 연산 불가
        printf("0은 사용할 수 없는 수입니다.\n");
        return 0.0f; // 0을 반환하나 float 형식이어야 하기에 "0.0f" 로 작성
    } else {
        return (float) num1 / num2; // num2가 0이 아니면 정상적으로 나눗셈이 가능하므로 연산
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

    /* 결과
    계산할 수식을 입력하세요 (예: 3 + 5 * 2 - 8 / 4): 
    결과: 59.000000
    */

    printf("계산할 수식을 입력하세요 (예: 3 + 5 * 2 - 8 / 4): ");
    scanf("%d %c %d %c %d %c %d %c %d", &num1, &c1, &num2, &c2, &num3, &c3, &num4, &c4, &num5);
   
    float result = running(num1, c1, num2, c2, num3, c3, num4, c4, num5);

    printf("결과: %.6f\n", result);
    return 0;
}  
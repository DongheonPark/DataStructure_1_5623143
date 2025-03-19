/* 
사칙연산에 해당하는 4가지 기능을 각각의 함수로 부여했습니다.
특히 신경써야 할 부분은 나눗셈으로 생각했는데, 0으로는 나눌 수 없기에 
0이 입력되면 경고 메시지와 0을 반환하도록 했습니다.
또한 소수점 연산이기에 float를 사용했고, 사용자로부터 입력받는 num1과 num2은
int형이기에, float로 반환되도록 강제 형변환도 사용했습니다.
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

int main() {
    int num1, num2;

    printf("첫 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &num1);

    printf("두 번째 양의 정수를 입력하세요: ");
    scanf("%d", &num2);

    printf("덧셈: %d\n", add(num1, num2));
    printf("뺄셈: %d\n", sub(num1, num2));
    printf("곱셈: %d\n", mul(num1, num2));
    printf("나눗셈: %.2f\n", div(num1, num2));
    
    return 0;
}  
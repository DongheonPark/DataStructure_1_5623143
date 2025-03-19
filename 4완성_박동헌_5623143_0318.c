/*
    소수는 1과 자신을 제외한 다른 수로 나누어 떨어지지 않는 수를 뜻합니다.
    사용자로부터 숫자를 입력받아 그 이하의 소수를 구하기 위해서는 나머지 연산자를 활용할 수 있겠습니다.
    for 문으로 구할 수 있을 것 같아 for 문으로 작성했습니다.
*/

#include <stdio.h>

int main() {
    int number, a, b;

    printf("정수 n을 입력하세요: ");
    scanf_s("%d", &number);

    printf("%d 이하의 소수: ", number);
    
    for(a = 2; a <= number; a++) { // 2부터 number까지 모든 수 검사
        for(b = 2; b < a; b++) { // 2부터 a-1까지 나누어지는지,
            if( a % b == 0) { // 나누어 떨어진다면 a는 소수 아님
                break;
            }
        }
        if(a == b) { // a가 어떤 b로도 나누어지지 않았다면 소수
            printf("%d ", a);
        }
    }

    return 0;
}
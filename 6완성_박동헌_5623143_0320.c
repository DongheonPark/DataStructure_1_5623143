/*
    지난 코드에서 보완한 점으로는 변수명을 변경했습니다. 기존에는 a와 b로 표현하여 이해하는데에 다소 난해하던것이 사실입니다.
    이를 해결하기 위해 사용자로부터 입력받은 수까지 실제로 증가하는 변수 a는 real로, 소수인지 판별하기 위해 증가하던 수를 의미하는 변수 b는 plus로 바꾸었습니다.
*/

#include <stdio.h>

int main() {
    int number, real, plus;

    printf("정수 n을 입력하세요: ");
    scanf_s("%d", &number);

    printf("%d 이하의 소수: ", number);
    
    for(real = 2; real <= number; real++) { // O(n) 으로 예측했습니다.
        for(plus = 2; plus < real; plus++) { // O(n) 으로 예측했습니다. 앞서 O(n)이 있었기에 코드 전체적으로는 O(n^2)가 될 것 같습니다.
            if( real % plus == 0) {
                break;
            }
        }
        if(real == plus) {
            printf("%d ", real);
        }
    }

    return 0;
}
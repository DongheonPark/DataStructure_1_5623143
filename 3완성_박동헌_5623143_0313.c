#include <stdio.h>
#include <string.h>

int main() {
    char word[100];

    printf("문자열을 입력하세요: "); //임의로 100 지정
    scanf_s("%[^\n]s", word); //한 줄로 문자열 입력 받음

    //문자열 길이
    int count = 0;
    for(int i = 0; word[i] != 0; i++) { //0부터 문자열 끝까지 반복
        count += 1;
    }
    printf("문자열의 길이: %d\n", count);

    //대소문자
    for(int i = 0; word[i] != 0; i++) {
        if(word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] + 32; //대소문자 차이가 32, 대문자를 소문자로 변환하려면 +32
        } else if(word[i] >= 'a' && word[i] <= 'z') {
            word[i] = word[i] - 32; //대소문자 차이가 32, 대문자를 소문자로 변환하려면 -32
        } else {
            printf("!!입력 오류!!\n"); //이외의 문자가 입력되었을 경우
        }
    }
    printf("변환된 문자열: %s", word);
    return 0;
}
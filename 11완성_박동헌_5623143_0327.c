#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char *name; 
    int id;
    int score;
} Student;

void input(Student *student) {
    student->name = (char*)malloc(50 * sizeof(char));
    printf("학생의 정보를 입력하세요 (이름 학번 점수): ");
    scanf_s("%s %d %d", student->name, &student->id, &student->score);
}

Student *findStudent(Student *students, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            return &students[i];
        }
    }
    return NULL;
}

int main() {
    int input_num;
    int search;

    printf("몇 명의 학생 정보를 입력하시나요? ");
    scanf_s("%d", &input_num);

    Student *students = (Student*)malloc(input_num * sizeof(Student));

    for (int i = 0; i < input_num; i++) {
        input(&students[i]);
    }

    while (true) {
        printf("학번을 입력하세요(0이면 종료)? ");
        scanf_s("%d", &search);

        if (search == 0) {
            break;
        }

        Student *result = findStudent(students, input_num, search);

        if (result != NULL) {
            printf("%s %d %d\n", result->name, result->id, result->score);
        } else {
            printf("해당 학번의 학생이 없습니다.\n");
        }
    }

    for (int i = 0; i < input_num; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}

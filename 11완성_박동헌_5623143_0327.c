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
    printf("�л��� ������ �Է��ϼ��� (�̸� �й� ����): ");
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

    printf("�� ���� �л� ������ �Է��Ͻó���? ");
    scanf_s("%d", &input_num);

    Student *students = (Student*)malloc(input_num * sizeof(Student));

    for (int i = 0; i < input_num; i++) {
        input(&students[i]);
    }

    while (true) {
        printf("�й��� �Է��ϼ���(0�̸� ����)? ");
        scanf_s("%d", &search);

        if (search == 0) {
            break;
        }

        Student *result = findStudent(students, input_num, search);

        if (result != NULL) {
            printf("%s %d %d\n", result->name, result->id, result->score);
        } else {
            printf("�ش� �й��� �л��� �����ϴ�.\n");
        }
    }

    for (int i = 0; i < input_num; i++) {
        free(students[i].name);
    }
    free(students);

    return 0;
}

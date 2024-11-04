#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

#define MAX_NAME_LEN 20

struct student
{
    char *name;
    int midterm;
    int final;
};

int compare_students(const void *a, const void *b)
{
    return strcmp(((struct student *)a)->name, ((struct student *)b)->name);
}

void display_student(const void *node_ptr, VISIT visit_type, int depth);

int main(void)
{
    char *name_buffer;
    struct student *student_array;
    struct student *root = NULL;
    int student_count;

    printf("학생 수의 최대 값을 입력하세요: ");
    scanf("%d", &student_count);

    name_buffer = (char *)malloc(student_count * MAX_NAME_LEN * sizeof(char));
    student_array = (struct student *)malloc(student_count * sizeof(struct student));

    char *name_ptr = name_buffer;
    struct student *stud_ptr = student_array;
    struct student **search_result;
    int i = 0;

    printf("각 학생의 이름, 중간고사 점수, 기말고사 점수를 입력하세요:\n");
    while (scanf("%s %d %d", name_ptr, &stud_ptr->midterm, &stud_ptr->final) != EOF && i++ < student_count)
    {
        stud_ptr->name = name_ptr;
        search_result = (struct student **)tsearch((void *)stud_ptr, (void **)&root, compare_students);

        printf("학생 \"%s\"님 이 ", (*search_result)->name);
        if (*search_result == stud_ptr)
            printf("트리에 추가되었습니다.\n");
        else
            printf("이미 트리에 존재합니다.\n");

        name_ptr += strlen(name_ptr) + 1;
        stud_ptr++;
    }

    printf("\n학생 정보 트리:\n");
    twalk((void *)root, display_student);

    free(name_buffer);
    free(student_array);
    return 0;
}

void display_student(const void *node_ptr, VISIT visit_type, int depth)
{
    if (visit_type == preorder || visit_type == leaf)
    {
        struct student *stud = *(struct student **)node_ptr;
        printf("이름: %-20s 중간고사 점수 : %d, 기말고사 점수 : %d\n", stud->name, stud->midterm, stud->final);
    }
}

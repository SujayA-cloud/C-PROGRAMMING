#include <stdio.h>

struct student {
    int id;
    char name[20];
    float total_marks;
    int age;
};

int main() {
    struct student s1 = {101, "nel", 69.69, 19};
    struct student s2 = {102, "robert", 88.88, 20};

    printf("id: %d\n", s1.id);
    printf("name: %s\n", s1.name);
    printf("total marks: %.2f\n", s1.total_marks);
    printf("age: %d\n\n", s1.age);

    printf("id: %d\n", s2.id);
    printf("name: %s\n", s2.name);
    printf("total marks: %.2f\n", s2.total_marks);
    printf("age: %d\n\n", s2.age);

    float avg = (s1.total_marks + s2.total_marks) / 2;
    printf("Average total marks of both students: %.2f\n", avg);

    return 0;
}

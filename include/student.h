#ifndef STUDENT_H
#define STUDENT_H

typedef struct marks{
    float English_language;
    float English_literature;
    float Mathematics;
    float Physics;
    float Chemistry;
    float Biology;
}marks;

typedef struct student{
    char name[50];
    int roll_no;
    marks sub_marks;
    float percentage;
}student;

int get_students();
int init_student(student** s, int current_count);
char* get_name();
int get_roll();
void get_marks(student* s);
float get_percentage(student* s);
void print_student(student* s, int total_count);


#endif
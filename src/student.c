#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"

int get_students(){
    int x;
    printf("Enter the number of students you want to add: ");
    scanf("%d", &x);
    return x;
}

int init_student(student** s, int current_count){
    int total_count = current_count + get_students();
    *s = (student*) realloc(*s,total_count*sizeof(student));
    if(*s==NULL){
        printf("Memory reallocation failed.");
        return current_count;
    }
    int i;
    for( i=current_count; i<total_count; i++){
        printf("\nStudent %d:\n", (i+1));
        strcpy((*s)[i].name, get_name());
        (*s)[i].roll_no = get_roll();
        get_marks(&(*s)[i]);
        (*s)[i].percentage = get_percentage(&(*s)[i]);
    }
    return total_count;
}

char* get_name() {
    char temp[100];
    printf("Enter the name of the student: ");
    getchar(); 
    fgets(temp, sizeof(temp), stdin);
    size_t len = strlen(temp);
    if (len > 0 && temp[len - 1] == '\n') {
        temp[len - 1] = '\0';
    }

    char* name = (char*)malloc(strlen(temp) + 1);
    if (name == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(name, temp);
    return name;
}

int get_roll(){
    int roll;
    printf("Enter the roll number of the student: ");
    scanf("%d", &roll);
    return roll;
}

//Assumptions - Subjects -> English language, English Literature, Physics, Chemistry, Maths, Biology
//Each paper is of 100 marks. Best of 5 rule is applied.

void get_marks(student* s){
    printf("Enter the marks of English Language: ");
    scanf("%f", &s->sub_marks.English_language);
    printf("Enter the marks of English Literature: ");
    scanf("%f", &s->sub_marks.English_literature);
    printf("Enter the marks of Physics: ");
    scanf("%f", &s->sub_marks.Physics);
    printf("Enter the marks of Chemistry: ");
    scanf("%f", &s->sub_marks.Chemistry);
    printf("Enter the marks of Mathematics: ");
    scanf("%f", &s->sub_marks.Mathematics);
    printf("Enter the marks of Biology: ");
    scanf("%f", &s->sub_marks.Biology);
}

float get_percentage(student* s){
    float marks[6] = { s->sub_marks.English_language, s->sub_marks.English_literature, s->sub_marks.Physics, s->sub_marks.Chemistry, s->sub_marks.Mathematics, s->sub_marks.Biology};
    float min = marks[0];
    float total = marks[0];
    for(int i = 1; i<6; i++){
        if(marks[i]<min){
            min = marks[i];
        }
        total+=marks[i];
    }
    return( ( (total-min) / 500 ) * 100 );

}

void print_student(student* s, int total_count){
    printf("\n---Report Cards---\n");
    printf("Printing all report cards: \n");
    int i = 0;
    for(i=0; i<total_count; i++){
        printf("Student %d :\n", (i+1));
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Percentage: %0.2f%%\n", s[i].percentage);
    }
}


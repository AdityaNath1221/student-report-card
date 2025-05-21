#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fileio.h"
#include "student.h"

//FILE STORAGE FORMAT
//student_name roll_no sub_marks(English_Lang Eng_Lit Maths Phy Chem Bio) percentage 
// 50 1 3 1 2 1 2 1 2 1 2 1 2 1 2 1 4 1

int load_from_file(student** s){
    FILE* fh = fopen("data/student.txt", "r");
    if ( fh == NULL ){
        perror("File could not be opened.");
        return 0;
    }
    int count = 0;
    int i = 0;
    while(1){
        char name[50];
        int roll;
        float eng_lan, eng_lit, maths, phy, chem, bio, percent;
        int n = fscanf(fh, "%s %d %f %f %f %f %f %f %f", name, &roll, &eng_lan, &eng_lit, &maths, &phy, &chem, &bio, &percent );
        if(n!=9){
            break;
        }
        else{
            count++;
        }
        
        *s = (student*) realloc(*s, (count)*sizeof(student));
        if(*s==NULL){
            printf("Memory Allocation failed.");
            return 0;
        }
        strcpy((*s)[i].name, name);
        (*s)[i].roll_no = roll;
        (*s)[i].sub_marks.English_language = eng_lan;
        (*s)[i].sub_marks.English_literature = eng_lit;
        (*s)[i].sub_marks.Mathematics = maths;
        (*s)[i].sub_marks.Physics = phy;
        (*s)[i].sub_marks.Chemistry = chem;
        (*s)[i].sub_marks.Biology = bio;
        (*s)[i].percentage = percent;

        printf("Student recors updated successfully.");

        i++;
    }

    fclose(fh);
    return count;
}

void save_to_file(){

}
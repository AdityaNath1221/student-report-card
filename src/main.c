#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"
#include "fileio.h"

int main(){
    int choice;
    int student_count = 0;
    student* S = NULL;
    do{
        printf("\n=== Student Report Card Generator ===\n");
        printf("1. Add new student(s)\n");
        printf("2. Display all report cards\n");
        printf("3. Search student by roll number\n");
        printf("4. Update student details\n");
        printf("5. Delete student record\n");
        printf("6. Save all report cards to file\n");
        printf("7. Load report cards from file\n");
        printf("8. Exit\n");
        printf("Enter your choice: \n");

        scanf("%d", &choice);

        if( choice ==1 ){
            student_count = init_student(&S, student_count);
        }
        else if( choice == 2){
            print_student(S, student_count);
        }
        else if( choice == 3){
            //search_student();
        }
        else if( choice == 4){
            //update_student();
        }
        else if( choice == 5){
            //delete_student();
        }
        else if( choice == 6){
            //save_report_cards();
        }
        else if( choice == 7){
            int loaded_count = load_from_file(&S);
            student_count += loaded_count;
        }
        else if(choice == 8 ){
            printf("Closing the program...\n");
            free(S);
        }
        else{
            printf("Invalid Choice");
        }
    }while(choice!=8);
    
    return 0;
}
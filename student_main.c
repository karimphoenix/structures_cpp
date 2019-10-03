#include <stdio.h>
#include <string.h>
#include "student.h"

int main()
{
    //task 2;
    student  me,  st1;
    strcpy(me.name,"Karimov");
    me.number_group=2;
    me.year=2014;
    me.marks[0]='4';
    me.marks[1]='3';
    me.marks[2]='4';

    printf("Me\n");
    print_student(&me);

    st1=me;

    printf("st1\n");
    print_student(&st1);

    char  s_name[15]="Fuklev";

    strcpy(st1.name, s_name);

    st1.marks[0]='5';
    st1.marks[1]='5';
    st1.marks[2]='5';

    printf("st1\n");
    print_student(&st1);
    printf("Me\n");
    print_student(&me);
    //end task 2;

    //task 3;
    printf("\n");
    printf("Task3\n");
    char  s_name1[15]="Fuklev F";
    int groups=3, years=2011;
    int  MARK[Count]={4, 3, 2};
    me=make_student(s_name1, years, groups, MARK);
    print_student(&me);
    //end task 3;

    //Task 4
  /*  printf("\n");
    printf("Task4\n");
    read_student(&st1);
    print_student(&st1);
    //End task 4

    //task 5;
    printf("\n");
    printf("Task 5\n");
    int mark1[Count]={'4','3','4'},
        mark2[Count]={'3','3','3'},
        mark3[Count]={'5','5','5'};
     student studArr[] =
{
  {"KDV",2014,2,mark1},
  {"FF",2014,2,mark2},
  {"MI",2014,2,mark3}
};

    print_arr_student(studArr,3);
    //end task5;

    //task6;
    printf("\n");
    printf("Task6\n");
    print_good_guys (studArr, Count);
    //end task6;

    //task7;
    printf("\n");
    printf("Task7\n");
    read_all_students(&st1, 1);
    print_student(&st1);
    //end task7;

    //task8;
    printf("\n");
    printf("Task8");
    copy_aStudent(faStudent, saStudent, Count);
    print_arr_student(saStudent, Count);
    //end task8;
        */

    return 0;
}

#ifndef STUDENT
#define STUDENT

#define N 15
#define Count 3

//task 1;
typedef struct
{
    char name[N];
    unsigned short year, number_group;
    unsigned char  marks[Count];
}student;
void print_student(student * pStudent);
//end task 1-2;

//task 3;
student make_student(char *pszName, int nYear, int nGroup, int *pnMarks);
//end task 3;

//task 4;
void read_student(student *pStudent);
//end task 4;

//task 5;
void print_arr_student(student *paStudent, int count_s);
//end task 5;

//task 6;
void print_good_guys (student *paStudent, int count_s);
//end_task6;

//task 7;
void read_all_students(student *paStudent, int count_s);
//end task7;

//task8;
void copy_aStudent(student *pFaStudent, student *pSaStudent, int count_s);
//end task8;

#endif // STUDENT

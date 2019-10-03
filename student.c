#include <stdio.h>
#include <string.h>
#include "student.h"


//task 2;
void print_student(student * pStudent)
{
    printf("Name %s\n",  pStudent->name);
    printf("Year %d\n", pStudent->year);
    printf("Group %d\n", pStudent->number_group);
    printf("Marks %s\n", pStudent->marks);
}
//end task 2;

//task 3;
student make_student(char *pszName, int nYear, int nGroup, int *pnMarks)
{
    student tempS;

    strcpy(tempS.name,pszName);
    tempS.year=nYear;
    tempS.number_group=nGroup;
    memcpy(tempS.marks, pnMarks, Count*sizeof(unsigned short));

    return tempS;
}
//end task 3;

//task 4;
void read_student(student *pStudent)
{
    char Name_S[N];
    scanf("%s\n",Name_S);

    int nYears, nGroups;
    scanf("%d %d\n",&nYears, &nGroups);

    char Marks[Count];
    scanf("%s",Marks);

    *pStudent=make_student(Name_S, nYears, nGroups, Marks);

}
//end task 4;

//task 5;
void print_arr_student(student *paStudent, int count_s)
{
    while (count_s)
    {
        print_student(paStudent);
        printf("\n");
        paStudent++;
        count_s--;
    }
}
//end task5;

//task 6;
void print_good_guys (student *paStudent, int count_s)
{
    while (count_s)
    {
        if (*paStudent->marks="555") print_student(paStudent);
        printf("\n");
        paStudent++;
        count_s--;
    }
}
//end task 6;

//task 7;
void read_all_students(student *paStudent, int count_s)
{
    int i=0;
    while (i<count_s)
    {
        read_student(paStudent);
        paStudent++;
        i++;
    }
}
//end task7;

//task8;
void copy_aStudent(student *pFaStudent, student *pSaStudent, int count_s)
{
    memcpy(pSaStudent, pFaStudent, count_s*sizeof(student));
}
//end task8;

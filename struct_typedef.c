//
// Created by JIAN HE on 2022-02-27.
//

#include <stdio.h>
#include <string.h>
// Type definition for "struct student" is status. i.e. status = "struct student"
typedef struct student
{
    int id;
    char name[20];
    float percentage;
} status;

int main()
{
    status record;
    record.id = 1;
    strcpy(record.name,"mark");
    record.percentage = 86.5;
    printf(" ID is %d \n", record.id);
    printf("Name: %s.\n", record.name);
    //set the precision of a float.
//    https://stackoverflow.com/questions/9213340/how-to-set-precision-of-a-float?answertab=votes#tab-top
    printf("percentage is: %0.6f.\n",record.percentage);
}
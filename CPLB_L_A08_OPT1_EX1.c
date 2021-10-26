#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student
{   int IDSV;
    char name[30];
    int age;
    char grade[30];
    float GPA;
};

typedef struct Student student;

student sv;

void InputStudentInfo(student *sv) {
    //Nhập thông tin sinh viên:
    printf("Nhap ID sinh vien hien tai: ");
    fflush(stdin);
    scanf("%d",&sv->IDSV);
    printf("Nhap ten sinh vien tuong ung voi ID: ");
    fflush(stdin);
    fgets(sv->name,sizeof(sv->name),stdin);
    printf("Nhap vao tuoi cua sinh vien: ");
    fflush(stdin);
    scanf("%d",&sv->age);
    printf("Nhap vao grade cua sinh vien: ");
    fflush(stdin);
    fgets(sv->grade,sizeof(sv->grade),stdin);
    printf("Nhap vao so GPA cua sinh vien: ");
    fflush(stdin);
    scanf("%f",&sv->GPA);
}

void OutputStudentInfomation(student sv) {
    printf("\nName: %s",sv.name);
    printf("ID: %d\n",sv.IDSV);
    printf("Age: %d\n",sv.age);
    printf("Grade: %s\n",sv.grade);
    printf("GPA: %g",sv.GPA);
}

int main() {
    int i;
    int numberOfStudent;
    printf("Hay nhap vao so luong sinh vien");
    scanf("%d",&numberOfStudent);
    student StudentList[numberOfStudent];
    for (i = 0; i < numberOfStudent; i++)
    {
        InputStudentInfo(&StudentList[i]);
    }
    
    for (i = 0; i < numberOfStudent; i++)
    {
        OutputStudentInfomation(StudentList[i]);
    }
    
    return 0;
}
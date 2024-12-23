#include<stdio.h>
#include<string.h>
struct Student {
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	struct Student student_1;
    printf("Hay nhap ten: ");
    fgets(student_1.name, 50, stdin);
    student_1.name[strlen(student_1.name) - 1] = '\0';
    printf("Hay nhap tuoi: ");
    scanf("%d",&student_1.age);
    printf("Hay nhap so dien thoai: ");
    fflush(stdin);
    fgets(student_1.phoneNumber, 50, stdin);
    printf("%s %d tuoi %s",student_1.name,student_1.age,student_1.phoneNumber);
    
	return 0;
}

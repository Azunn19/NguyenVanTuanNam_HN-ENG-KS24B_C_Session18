#include<stdio.h>
struct Student {
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
    struct Student student_1 = { "Nguyen Van Tuan Nam", 18, "0123456789"};
    printf("%s %d tuoi %s",student_1.name,student_1.age,student_1.phoneNumber);
    
	return 0;
}


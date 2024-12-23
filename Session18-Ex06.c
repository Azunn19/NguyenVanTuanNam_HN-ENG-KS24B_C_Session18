#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student sv[50] = {
    	{"Nguyen Van A","0123456781",1,18},
    	{"Nguyen Van B","0123456782",2,18},
    	{"Nguyen Van C","0123456783",3,18},
    	{"Nguyen Van D","0123456784",4,18},
    	{"Nguyen Van E","0123456785",5,18}
    };
    int studentCount = 5;
    if (studentCount < 50) {
        printf("Nhap thong tin sinh vien moi:\n");
        printf("ID: ");
        scanf("%d", &sv[studentCount].id);
        printf("Ten: ");
        fflush(stdin);
        fgets(sv[studentCount].name, sizeof(sv[studentCount].name), stdin);
        sv[studentCount].name[strlen(sv[studentCount].name) - 1] = '\0';
        printf("Tuoi: ");
        scanf("%d", &sv[studentCount].age);
        printf("So dien thoai: ");
        fflush(stdin);
        fgets(sv[studentCount].phoneNumber, sizeof(sv[studentCount].phoneNumber), stdin);
        sv[studentCount].phoneNumber[strlen(sv[studentCount].phoneNumber) - 1] = '\0';
        studentCount++;
    } else {
        printf("\nKhong the them sinh vien moi vi mang da day.\n");
    }
    printf("\nDanh sach thong tin sinh vien sau khi them moi:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }

    return 0;
}


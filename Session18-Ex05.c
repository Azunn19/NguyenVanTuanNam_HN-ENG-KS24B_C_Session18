#include<stdio.h>
#include<string.h>
struct sinhVien{
	char name[50];
	char phoneNumber[50];
	int id;
	int age;
};
int main(){
    struct sinhVien sv[50] = {
    	{"Nguyen Van A","0123456781",1,18},
    	{"Nguyen Van B","0123456782",2,18},
    	{"Nguyen Van C","0123456783",3,18},
    	{"Nguyen Van D","0123456784",4,18},
    	{"Nguyen Van E","0123456785",5,18}
	};
    int searchId;
    printf("Nhap ID sinh vien can tim: ");
    scanf("%d", &searchId);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (sv[i].id == searchId) {
            found = 1;
            printf("\nTim thay sinh vien ID %d:\n", searchId);
            printf("Ten hien tai: %s\n", sv[i].name);
            printf("Tuoi hien tai: %d\n", sv[i].age);
            printf("\nNhap ten moi: ");
            fflush(stdin);
            fgets(sv[i].name, sizeof(sv[i].name), stdin);
            sv[i].name[strlen(sv[i].name) - 1] = '\0';
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv[i].age);
            break;
        }
    }
    if(found == 0){
        printf("\nKhong tim thay sinh vien có ID %d\n", searchId);
    }
    printf("\nDanh sach thong tin sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
    }
	return 0;
}

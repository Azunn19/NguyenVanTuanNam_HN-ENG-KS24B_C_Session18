#include<stdio.h>
#include<string.h>
struct sinhVien{
	char name[50];
	char phoneNumber[50];
	int age;
};

int main(){
    struct sinhVien sv[5];
	for (int i = 0;i < 5;i++){
		printf("Hay nhap thong tin sinh vien thu %d:\n",i + 1);
		fflush(stdin);
		printf("Hay nhap ten: ");
		fgets(sv[i].name,sizeof(sv),stdin);
		sv[i].name[strlen(sv[i].name) - 1] = '\0';
		printf("Hay nhap so dien thoai: ");
		fgets(sv[i].phoneNumber,sizeof(sv),stdin);
		sv[i].phoneNumber[strlen(sv[i].phoneNumber) - 1] = '\0';
		printf("Hay nhap tuoi: ");
		scanf("%d",&sv[i].age);
    }  
    for (int i = 0;i < 5;i++){
    	printf("\nSinh vien thu %d:\n",i + 1);
    	printf("Ten: %s\n",sv[i].name);
    	printf("Tuoi: %d\n",sv[i].age);
    	printf("So dien thoai: %s\n",sv[i].phoneNumber);
	}
    
	return 0;
}

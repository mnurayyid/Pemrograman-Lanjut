#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa{
	char nama[30];
	int npm;
	float mk[10];
	float ips;
};


int main() {
	
	struct Mahasiswa mhs[10];
	int loop=1,menu,i,j,data=0;
	float ip=0;
	char maku[10][20]={"Pancasila","Bahasa Indonesia","Bahasa Inggris","Algoritma Dasar","Premrograman Dasar"};
	
	while(loop==1){
		printf("=============================================\n");
		printf("======Selamat Datang di Sistem Akademik======\n");
		printf("=============================================\n\n");
		
		printf("\t\t Menu\t:\n\n\t1. Input Data\n\t2. View Data\n\t3. Exit\n");
		printf("\tMasukkan Kode Menu : ");
		scanf("%i",&menu);
		
		switch(menu){
			case 1 :{
				system("cls");
						printf("=============================================\n");
						printf("================Input Data===================\n");
						printf("=============================================\n\n");
						
						printf("Masukkan Nama Mahasiswa\t: ");
						scanf("%s",&mhs[data].nama);
						printf("Masukkan NPM Mahasiswa\t: ");
						scanf("%i",&mhs[data].npm);
						for(i=0;i<5;i++){
							printf("Masukkan Nilai Kata Kuliah %s\tMahasiswa\t: ",maku[i]);
							scanf("%f",&mhs[data].mk[i]);
							ip = ip + mhs[data].mk[i];
						}
						mhs[data].ips = ip / 5;
						data++;
				}break;
			case 2 :{
				system("cls");
						if(data==0){
						printf("===============================================\n");
						printf("===============Data Tidak Ada==================\n");
						printf("===============================================\n\n");
					}
					else{
						for(i=0;i<data;i++){
						printf("\n=============================================\n");
						printf("Nama Mahasiswa\t: %s\n",mhs[i].nama);
						printf("NPM Mahasiswa\t: %i\n",mhs[i].npm);
						for(j=0;j<5;j++){
							printf("Nilai Kata Kuliah %s\tMahasiswa\t: %f\n",maku[i],mhs[i].mk[j]);
						}
						printf("IPS Mahasiswa\t: %f\n",mhs[i].ips);
						}
					}
				}break;
			case 3 : loop=0;
				break;
			default :{
				printf("\n\tKode Menu Salah!!!");
				sleep(2);
				}break; 
		}
		system("cls");
	}
	printf("=============================================\n");
	printf("===============Terima Kasih==================\n");
	printf("=============================================\n\n");
	
	return 0;
}

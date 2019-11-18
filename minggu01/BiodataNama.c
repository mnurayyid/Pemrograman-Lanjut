#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	//atribut
	char nama[50][10], TeLahir[20][10], TaLahir[20][10], umur[3][10], alamat[50][10]; 
	int data, loop=1, menu;
	
	do{
	printf("\n==================================================================\n");
	printf("\tSelamat Datang Pada Menu Pemasukan Data Percetakan SIM");
	printf("\n==================================================================\n");
	printf("\tMenu\t:\n\t1.Input Data\n\t2.Data View\n\t3.Keluar Menu\n\tMasukkan Nomor Menu\t:");
	scanf("%i",&menu);
	switch(menu){
		case 1 : for(data=1;data<=10;data++){
				printf("\n\tMenu Pemasukkan Data\n");
				printf("\tNama\t\t:");
				scanf("%s",&nama);
				printf("\tTempat Lahir\t:");
				scanf("%s",&TeLahir);
				printf("\tTanggal Lahir\t:");
				scanf("%s",&TaLahir);
				printf("\tUmur\t\t:");
				scanf("%s",&umur);
				printf("\tAlamat\t\t:");
				scanf("%s",&alamat);
				break;
		}break;
		case 2 : printf("\n\tMenu View Data\n"); 
				for(data=1;data<=10;data++){
				printf("\nData Ke-%i",data);
				printf("\n\tNama\t\t:%s",nama);
				printf("\n\tTempat Lahir\t:%s",TeLahir);
				printf("\n\tTanggal Lahir\t:%s",TaLahir);
				printf("\n\tUmur\t\t:%s",umur);
				printf("\n\tAlamat\t\t:%s",alamat);
				break;
		}break;
		case 3 : loop=0;
		break;
		default : printf("\nNomor Menu Yang Anda Masukkan Salah");
	}
	}while(loop==1);
	printf("Terima Kasih Sudah menggunakan Layanan Kami");
		
	return 0;
}

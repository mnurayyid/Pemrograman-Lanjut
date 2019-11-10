#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct kontainer{
	int ukuran;
	int berat;
	char vendor[12];
	char jenisM[12];
};

struct blok{
	struct kontainer kon[9];	
};

int main() {
	
	struct blok blk[3];
	struct blok pindah;
	int loop=1,menu,i,j,k,blok;
	char pnd;
		while(loop==1){
		printf("=============================================\n");
		printf("======Peti Kemas Pelabuhan Tanjung Perak======\n");
		printf("=============================================\n\n");
		
		printf("\t\t Menu\t:\n\n\t1. Input Data\n\t2. View Data\n\t3. Aturan Baru\n\t4.Exit\n");
		printf("\tMasukkan Kode Menu : ");
		fflush(stdin);
		scanf("%i",&menu);
		
		switch(menu){
			case 1 :{
				system("cls");
						printf("=============================================\n");
						printf("================Input Data===================\n");
						printf("=============================================\n\n");
						
						printf("\t\t Blok\t:\n\n\t1. Blok A\n\t2. Blok B\n\t3. Blok C\n");
						printf("\tMasukkan Kode Blok : ");
						fflush(stdin);
						scanf("%i",&blok);
						if(blok>0 && blok<4){
								for(i=1;i<10;i++)
									printf("Masukkan Ukuran Kontainer\t: ");
									fflush(stdin);
									scanf("%i",&blk[blok].kon[i].ukuran);
									printf("Masukkan Berat Kontainer\t: ");
									fflush(stdin);
									scanf("%i",&blk[blok].kon[i].berat);
									printf("Masukkan Vendor Kontainer\t: ");
									fflush(stdin);
									scanf("%s",&blk[blok].kon[i].vendor);
									printf("Masukkan Jenis Muatan Kontainer\t: ");
									fflush(stdin);
									scanf("%s",&blk[blok].kon[i].jenisM);
						}
				}break;
			case 2 :{
				system("cls");
						printf("\t\t Blok\t:\n\n\t1. Blok A\n\t2. Blok B\n\t3. Blok C\n");
						printf("\tMasukkan Kode Blok : ");
						fflush(stdin);
						scanf("%i",&blok);
						if(blok>0 && blok<4){
							printf("\n=============================================\n");
							printf("| Kontainer\t| Ukuran\t| Berat\t| Vendor\t| Jenis Muatan\t|");
							for(i=1;i<10;i++){
								printf("| %i\t| %i\t| %i\t| %s\t| %s\t|",i,blk[blok].kon[i].ukuran,blk[blok].kon[i].berat,blk[blok].kon[i].vendor,blk[blok].kon[i].jenisM);
							}
							printf("\n=============================================\n");
						}
						getch();
				}break;
			case 3 : {
				system("cls");
				pnd='y';
				while(pnd='y'){
					printf("\n===============================================\n");
					printf("\n=========Pemindahan Dilakukan Satu-satu========\n");
					printf("\t\t Blok\t:\n\n\t1. Blok A\n\t2. Blok B\n\t3. Blok C\n");
					printf("\tMasukkan Kode Blok Yang akan Dipindah : ");
					fflush(stdin);
					scanf("%i",&blok);
					printf("\tMasukkan Nomor Kontainer Yang akan Dipindah : ");
					fflush(stdin);
					scanf("%i",&i);
					printf("\n\tMasukkan Kode Blok Tujuan : ");
					fflush(stdin);
					scanf("%i",&j);
					printf("\tMasukkan Nomor Kontainer Tujuan : ");
					fflush(stdin);
					scanf("%i",&k);	
/*					if(blok>0 && blok<4 && j>0 &&j<4){
						pindah.kon.berat = blk[j].kon[k].berat;
						pindah.kon.jenisM = blk[j].kon[k].jenisM;
						pindah.kon.ukuran = blk[j].kon[k].ukuran;
						pindah.kon.vendor = blk[j].kon[k].vendor;
						blk[j].kon[k].berat = blk[blok].kon[i].berat;
						blk[j].kon[k].jenisM = blk[blok].kon[i].jenisM;
						blk[j].kon[k].ukuran = blk[blok].kon[i].ukuran;
						blk[j].kon[k].vendor = blk[blok].kon[i].vendor;
						blk[blok].kon[i].berat = pindah.kon.berat;
						blk[blok].kon[i].jenisM = pindah.kon.jenisM;
						blk[blok].kon[i].ukuran = pindah.kon.ukuran;
						blk[blok].kon[i].vendor = pindah.kon.vendor;
						Printf("Pemindahan Berhasil!!!");
						getch();
						sytem("cls");
					}else{
						Printf("Pemindahan Gagal!!!");
						getch();
						sytem("cls");
					}
*/					printf("\tIngin Melakukan Pemindahan Lagi(y/n) : ");
					fflush(stdin);
					scanf("%c",&pnd);
				}
				
				break;
			}
			case 4 : loop=0;
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

void input(b){
}

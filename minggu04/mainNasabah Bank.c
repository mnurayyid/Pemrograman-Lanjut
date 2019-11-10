#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	struct tgl_lahir {
		int tanggal;
		int bulan;
		int tahun;
	};
	struct alamat {
		char jalan[40];
		char kota[20];
		char provinsi[20];
	};
	struct rekening {
		char no_rek[12];
		long int saldo;
		char nama[20];
		char bank[10];
		struct tgl_lahir tgl_lahir;
		int umur;
		struct alamat alamat;
	};
	
int main(int argc, char *argv[]) {
	int index=0,now=2019, i=0, j, bank;
	char convert[128];
	int loop=1, menu, total=0, icari;
	char ccari[20];
	struct rekening rek[3];
	
	
	while(loop==1){
	printf("========================================\n");
	printf("=========Data Nasabah Indonesia=========\n");
	printf("========================================\n\n");
		printf("Menu : \n\t1. Create Data\n\t2. View Data\n\t3. Search Saldo\n\t4. Saldo Total\n\t5. Search Umur \n\t6. Search Provinsi\n");
		printf("Masukkan Kode Menu\t: ");
		scanf("%i",&menu);
		
		switch(menu){
		case 1:		//Input Data
			{
				printf("Input Nama : ");
				scanf("%s",&rek[i].nama);
				rek[i].saldo = rand() %100000000+1000000;
				printf("Input Kode Bank : \n\t1. BCA\n\t2. BNI\n\t3. BRI\n\t4. Mandiri\n");
				printf("Masukkan Kode Bank : ");
				scanf("%i",&bank);
				switch(bank){
					case 1:
						strcpy(rek[i].bank,"BCA");
						strcpy(rek[i].no_rek,"001");
						break;
					case 2:
						strcpy(rek[i].bank,"BNI");
						strcpy(rek[i].no_rek,"002");
						break;
					case 3:
						strcpy(rek[i].bank,"BRI");
						strcpy(rek[i].no_rek,"003");
						break;
					case 4:
						strcpy(rek[i].bank,"Mandiri");
						strcpy(rek[i].no_rek,"004");
						break;
					default:
						printf("Kode Input Salah");
						break;
				}
					printf("Input Tanggal Lahir : \n");
					printf("\tTanggal		: ");
					scanf("%i",&rek[i].tgl_lahir.tanggal);	
					printf("\tBulan		: ");
					scanf("%i",&rek[i].tgl_lahir.bulan);
					printf("\tTahun		: ");
					scanf("%i",&rek[i].tgl_lahir.tahun);
					fflush(stdin);
					
					rek[i].umur = now - rek[i].tgl_lahir.tahun;
					
						printf("Input Alamat Rumah : \n");
						printf("\tAlamat		: ");
						scanf("%[^\n]",&rek[i].alamat.jalan);	
						fflush(stdin);
						printf("\tKota		: ");
						scanf("%[^\n]",&rek[i].alamat.kota);
						fflush(stdin);
						printf("\tProvinsi	: ");
						scanf("%[^\n]",&rek[i].alamat.provinsi);
						fflush(stdin);
												//crate random no_rek
										strcat(rek[i].no_rek,itoa(rand()%512+128,convert,10));
										if(rek[i].tgl_lahir.tanggal<10){
											strcat(rek[i].no_rek,"0");
										}
										strcat(rek[i].no_rek,itoa(rek[i].tgl_lahir.tanggal,convert,10));	
										if(rek[i].tgl_lahir.bulan<10){
											strcat(rek[i].no_rek,"0");
										}
										strcat(rek[i].no_rek,itoa(rek[i].tgl_lahir.bulan,convert,10));
										if((rek[i].tgl_lahir.tahun%100)<10){
											strcat(rek[i].no_rek,"0");
										}
										strcat(rek[i].no_rek,itoa((rek[i].tgl_lahir.tahun)%10,convert,10));
										printf("%s\n",rek[i].no_rek);
										fflush(stdin);
				
				i++;
			}
			break;
		case 2:				//View data
		{
			printf("Data Nasabah	 \n");
			for(j=0;j<i;j++){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %i\n",rek[j].umur);
				printf("Tgl Lahir	: %i-%i-%i\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s Kota %s Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: %i\n",rek[j].saldo);
				printf("\n\n");
				}	
		}
			break;
		case 3:				//Cari jarak saldo dengan input user
		{
			printf("\nMasukkan saldo : ");
			scanf("%i",&icari);
			for(j=0;j<i;j++){
				if(rek[j].saldo<icari){
					printf("Nama %s saldo kurang dari %d\tSaldo Nasabah : %i\n",rek[j].nama,icari,rek[j].saldo);
				}else{
					printf("Nama %s saldo lebih dari %d\tSaldo Nasabah : %i\n",rek[j].nama,icari,rek[j].saldo);
				}
				}
		}
			break;
		case 4:				//Jumlah saldo total
		{
			for(j=0;j<i;j++){
				total = total + rek[j].saldo;
			}
			printf("\nTotal Saldo Seluruh Nasabah\t: %d",total);
		}
			break;
		case 5:				//Cari jarak umur dengan input user
		{
			printf("\nMasukkan Umur :");
			scanf("%d",&icari);
			for(j=0;j<i;j++){
				if(rek[j].umur<icari){
					printf("Nama %s umur kurang dari %d\tUmur Nasabah : %i\n",rek[j].nama,icari,rek[j].umur);
				}else {
					printf("Nama %s umur lebih dari %d\tUmur Nasabah : %i\n",rek[j].nama,icari,rek[j].umur);
				}
				}	
		}
			break;
		case 6:				//Cari nasabah dengan provinsi
		{
			printf("\nMasukkan input Provinsi : ");
			scanf("%s",&ccari);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].alamat.provinsi,ccari)==0){
					printf("Nama %s ada pada provinsi %s\n",rek[j].nama,ccari);
				}
				}
		}
			break;
		default:
			printf("Code Menu Salah");
			break;
		}	
		
		printf("\n\nApakah anda ingin mengulang? (1. Ya/2. Tidak) : ");
		scanf("%d",&loop);
		system("cls");
	}
	
	printf("===================================\n");
	printf("===========Terima Kasih============\n");
	printf("===================================\n");
	

	return 0;
}

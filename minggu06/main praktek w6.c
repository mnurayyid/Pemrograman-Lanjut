#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	float titik[3][5][3];
	float hasil[3][3];
	int i, j, k, l, g1=0, t1=0, t2, menu,loop=1;
	
	while(loop==1){
		system("cls");
		printf("=============================================\n");
		printf("========Kalkulator Jarak Antar Titik=========\n");
		printf("=============================================\n\n");
		
		printf("\t\t Menu\t:\n\n\t1. Input Titik\n\t2. Ganti Garis\n\t3. View Titik\n\t4. Hitung Titik\n\t5. Exit\n");
		printf("\tMasukkan Kode Menu : ");
		scanf("%d",&menu);
		
			if (menu==1) {
				system("cls");
					printf("==============================================\n");
					printf("================Input Titik===================\n");
					printf("==============================================\n\n");
 
					for(i=0;i<3;i++){
						printf("Masukkan Angka Garis ke-%i Titik ke-%i x%i :",g1,t1,i);
						scanf("%f",&titik[g1][t1][i]);
						fflush(stdin);
					}t1++;}
					
			else if (menu==2){
				system("cls");
					printf("==============================================\n");
					printf("============Garis Berhasil Di Ubah============\n");
					printf("==============================================\n\n");
					g1++;t2=t1;
					t1=0;
					sleep(2);}
					
			else if(menu==3){
				system("cls");
					for(i=0;i<g1;i++){
						for(j=0;j<t2;j++){
							printf("\n==============================================\n");
							printf("\nGaris ke-%i Titik ke-%i :\n\t",i,j);
							for(k=0;k<3;k++){
								printf(" x%i : %f ",i,titik[i][j][k]);
							}
						}
						for(j=0;j<t1;j++){
							printf("\n==============================================\n");
							printf("\nGaris ke-%i Titik ke-%i :\n\t",i,j);
							for(k=0;k<3;k++){
								printf(" x%i : %f ",i,titik[i][j][k]);
							}
						}
					}
					sleep(5);}
					
			else if (menu==4){
				system("cls");
					printf("==============================================\n");
					printf("==========Mencari Jarak Antar Titik===========\n");
					printf("==============================================\n\n");
					printf("Masukkan Garis ke-: ");scanf("%i",&j);
					printf("Masukkan Titik ke-1: ");scanf("%i",&k);
					printf("Masukkan Titik ke-2: ");scanf("%i",&l);
					
					for(i=0;i<3;i++){
						hasil[0][i] = titik[j][k][i]-titik[j][l][i];
					}
					for(i=0;i<3;i++){
						hasil[1][i] = pow(hasil[0][i],2);
					}
					hasil[2][0] = hasil[1][0]+hasil[1][1]+hasil[1][2];
					hasil[2][1] = sqrt(hasil[2][0]);
					
					printf("\n\nJarak Antara Titik-%i ke Titik-%i Pada Garis-%i Adalah\t: %f",j,k,l,hasil[2][1]);
				sleep(5);}
				
			else if (menu==5){
				loop=0;}
			
			else{
				printf("\n\tKode Menu Salah!!!");
				sleep(2);}
	
}
	system("cls");
	printf("\n\n=============================================\n");
	printf("===============Terima Kasih==================\n");
	printf("=============================================\n\n");
	
	return 0;
}

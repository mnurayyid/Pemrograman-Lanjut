#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

	struct Mahasiswa{
		float ipk;
		int npm;
	};typedef struct Mahasiswa mahas[10];


	struct ipkmhs{
		char npm[11];
		char nama[10];
		float ipk;
	};

int main() {
	
	int arr[20] = {12,34,53,54,55,82,36,65,95,63,24,85,38,20,17,43,84,28,30,98};
	int i,j=0;
	int search;
	/*
	for(i=0;i<20;i++){
		arr[i] = rand() %100 +1;
	}
	
	printf("\n\n\tTampilan Isi Data\n=====================================================");
	for(i=0;i<20;i++){
		printf("\nData ke-%i\t= %i",i+1,arr[i]);
	}
	
	printf("\n\n\tTampilan Isi Data Terbalik\n=====================================================");
	for(i=19;i>=0;i--){
		printf("\nData ke-%i\t= %i",i+1,arr[i]);
	}
	
	printf("\n\nMasukkan Angka Yang dicari : "); scanf("%i",&search);
	while(j<20){
		if(arr[j]==search){
			printf("Data Ditemukan Pada Data ke-%i",j+1);
			break;}
		else 
			if(j<19)
				j++;
			else{
				printf("Data Tidak Ditemukan");
				j++;}
	}
	*/
	
	/*
	float ipk[10]= {3.55,3.56,3.57,3.58,3.59,3.61,3.62,3.63,3.64,3.65};
	int npm[10]={1808101001,1808101002,1808101003,1808101004,1808101005,1808101006,1808101007,1808101008,1808101009,1808101010};
	
	for(i=0;i<10;i++){
		printf("\nIPK Mahasiswa NPM : %i\t= %lf",npm[i],ipk[i]);
	}
	
	printf("\n\n\n");
	
	mahas mhs;
	
	mhs[0].ipk=3.55;
	mhs[1].ipk=3.56;
	mhs[2].ipk=3.57;
	mhs[3].ipk=3.58;
	mhs[4].ipk=3.59;
	mhs[5].ipk=3.61;
	mhs[6].ipk=3.62;
	mhs[7].ipk=3.63;
	mhs[8].ipk=3.64;
	mhs[9].ipk=3.65;
	mhs[0].npm=1808101001;
	mhs[1].npm=1808101002;
	mhs[2].npm=1808101003;
	mhs[3].npm=1808101004;
	mhs[4].npm=1808101005;
	mhs[5].npm=1808101006;
	mhs[6].npm=1808101007;
	mhs[7].npm=1808101008;
	mhs[8].npm=1808101009;
	mhs[9].npm=1808101010;
	
	for(i=0;i<10;i++){
		printf("\nIPK Mahasiswa NPM : %i\t= %lf",mhs[i].npm,mhs[i].ipk);
	}
	*/
		
	struct ipkmhs mhsi[10];
	
	for(i=0;i<5;i++){
		printf("\nMasukkan Nama\t: ");
		scanf("%s",&mhsi[i].nama);
		printf("Masukkan NPM\t: ");
		scanf("%s",&mhsi[i].npm);
		printf("Masukkan IPK\t: ");
		scanf("%f",&mhsi[i].ipk);
		fflush(stdin);		
	}
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		if(mhsi[i].ipk>3)
			printf("\nMahasiswa %s memiliki IPK Diatas 3",mhsi[i].nama);
		else{
			if (mhsi[i].ipk<3)
				printf("\nMahasiswa %s memiliki IPK Dibawah 3",mhsi[i].nama);
			else
				printf("Data Tidak Ada");}
	}	
	
	return 0;
}



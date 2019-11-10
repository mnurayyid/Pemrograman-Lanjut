#include <stdio.h>
#include <stdlib.h>

int main() {
	int hasil=1,angka,pangkat;
	
	printf("\n\tKALKULATOR PEMANGKATAN\n");
	printf("\n\tMasukkan Angka\t\t: ");
	scanf("%i",&angka);
	printf("\tMasukkan Pangkat\t: ");
	scanf("%i",&pangkat);
	
	int i=pangkat;
	while(i!=-1){
		if(i!=0){
			hasil=hasil*angka;
			i=i-1;
		}else{
		printf("\n\tHasil Dari %i ^ %i Adalah %i",angka,pangkat,hasil);
		i=i-1;}
	} 
		
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

long int Pangkat(int a,int p){
	if(p==0)    
	 return 1;
	else
	 return a*Pangkat(a,p-1);}


int main() {
	
	long int hasil;
	int angka,pangkat;
	
	printf("\n\tKALKULATOR PEMANGKATAN\n");
	printf("\n\tMasukkan Angka\t\t:");
	scanf("%i",&angka);
	printf("\tMasukkan Pangkat\t:");
	scanf("%i",&pangkat);
	
	hasil=Pangkat(angka,pangkat);
	printf("\n\tHasil Dari %i ^ %i Adalah %li",angka,pangkat,hasil);
	
	return 0;
}


/*
	if a=3 p=3

Explanation phase : Pangkat(3,3)	= 3*Pangkat(3,3-1)
									= 3*(3*Pangkat(3,2-1))
									= 3*(3*(3*Pangkat(3,1-1)))
									= 3*(3*(3*(1)))

subtitution phase : Pangkat(3,3)	= 3*(3*(3*(1)))
									= 3*(3*(3))
									= 3*(9)
									= 27

*/

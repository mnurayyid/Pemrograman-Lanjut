#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct laptop{
	char type[30];
	char merk[30];
	double harga;
};
typedef struct laptop pc;

int main() {
	
	pc lenovo;
	//lenovo.type="Lenovo Carbon XI";
	strcpy(lenovo.type,"Lenovo Carbon XI");
	//lenovo.merk="Lenovo";
	strcpy(lenovo.merk,"Lenovo");
	lenovo.harga = 10000000;
	
	printf("\nNama PC\t\t:%s\n",lenovo.type);
	printf("Merk\t\t:%s\n",lenovo.merk);
	printf("Harga\t\t:Rp. %lf\n",lenovo.harga);
	
	int nilai = 10;
	int *pnilai = &nilai;
	printf("\nValue Nilai\t= %i\n",nilai);
	printf("Alamat Nilai\t= %i\n",&nilai);
	printf("Value Nilai diakses dari Pointer = %i\n",*pnilai);
	
	// Tugas :
	//1. buat program sederhana input recursif dan bukan rekursif Pangkat
	//2. buat expansion phase dan substitution phase dari program rekursif
	
	return 0;
}

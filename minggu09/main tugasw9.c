#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int menu, hasil, cari, i, j=0, arr[10]; 
	
	for(i=0;i<10;i++){
		arr[i] = rand() %100+10;
	}
	
	for(i=0;i<10;i++){
		printf("%i ",arr[i]);
	}
	
	printf("\nMasukkan Angka yang dicari : ");
	scanf("%i",&cari);
	
	printf("\n\nMenu Searching :\n1.\tSequential\n2.\tBinery\n\n\tMasukkan Kode Menu : ");
	scanf("%i",&menu);
	printf("\n");
	
	if(menu==1)
		hasil = Sequential(arr,j,cari);
	else if(menu==2)
		hasil = Binery(arr,j,cari);
		
	if(hasil == 1)
		printf("\nData Ada !");
	else
		printf("\nData Tidak Ada !");
	
	return 0;
}

int Sequential(int arr[10], int i, int cari){
	
	if(arr[i] == cari)
		return 1;
	else if(i<10){
		i++;
		return Sequential(arr, i, cari);}
	else if(i==10)
		return 0;
}

int Binery(int arr[10],int i,int cari){
	int  menu, j, k;
	
	for(i=0;i<10;i++){    //sort
        for( j=i+1;j<10;j++){
            if(arr[j]<arr[i]){
               k=arr[i];
               arr[i]=arr[j];
               arr[j]=k;
            }
        }
    }
    
    int a=0, b=(0+10)/2, c=10;
    while(cari != arr[b] && a!=b && b!=c && c!=a){
    	if(cari > arr[b]){
    		a = b+1;
    		b = (a+c)/2;
		}
		else if (cari < arr[b]){
			c = b-1;
			b = (a+c)/2;
		}
	}
	
	for(i=0;i<10;i++){
		printf("%i ",arr[i]);
	}
	
	if(arr[b] == cari)
		return 1;
	else
		return 0;
}

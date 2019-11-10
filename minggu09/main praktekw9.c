#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int arr[10], cari, i, j, k, a, b, c;
	
	for(i=0;i<10;i++){
		arr[i] = rand() %100+10;
	}
	
	for(i=0;i<10;i++){
		printf("%i ",arr[i]);
	}
	
	printf("\nMasukkan Angka yang dicari : ");
	scanf("%i",&cari);
	
	// Sequential search with sentinel
/*	for(i=0;i<=10;i++){
		if(arr[i] == cari){
			printf("Data Ada !\n Data ke : %i",i);
			break;}
		if(i==10)
			printf("Data Tidak Ada !");
	}*/
	
	//Binery search
	for(i=0;i<10;i++){    //sort
        for( j=i+1;j<10;j++){
            if(arr[j]<arr[i]){
               k=arr[i];
               arr[i]=arr[j];
               arr[j]=k;
            }
        }
    }
    
    a=0; b=(0+10)/2; c=10;
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
		printf("\nData Ada !");
	else
		printf("\nData Tidak Ada !");
		
	return 0;
}

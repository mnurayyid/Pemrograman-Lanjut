#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int arr[10], menu, hasil=0, cari, g, h, i, j=0, a=0, b=9;
	
	for(i=0;i<10;i++){
		arr[i] = rand() %100+10;
	}
	
	for(i=0;i<10;i++){
		printf("%i ",arr[i]);
	}
		
	for(i=0;i<10;i++){    //bubble sort
        for( h=i+1;h<10;h++){
            if(arr[h]<arr[i]){
               g=arr[i];
               arr[i]=arr[h];
               arr[h]=g;
            }
        }
    }
	
	printf("\n\nMenu Searching :\n1.\tInterpolation Search\n2.\tBubble Sort DU\n3.\tBubble Sort UD\n\n\tMasukkan Kode Menu : ");
	scanf("%i",&menu);
	printf("\n");
	
	if(menu==1){
		printf("\n\nMasukkan Angka yang dicari : ");
		scanf("%i",&cari);
		hasil = Interpolation(arr,a,b,cari);}
	else if(menu==2)
		hasil = BubbleUp(arr,j);
	else if(menu==3)
		hasil = BubbleDown(arr,j);
	else
		printf("\nKode Menu Salah !");
	
	if(hasil != 0){
			if(hasil != 1)
			printf("\nData Ditemukan !\nData Berada Pada Indeks Ke-%i",hasil);
		else if(hasil == 1)
			printf("\nData Tidak Ditemukan !");
	}else{
		printf("\nPengurutan Selesai !\n");
		for(i=0;i<10;i++){
			printf("%i ",arr[i]);
		}
	}
	
	return 0;
}

int Interpolation(int arr[10], int a, int b, int cari){
	int pos;
	pos=(cari-arr[a])/(arr[b]-arr[a])*(b-a)+a;
	
	if(arr[pos]==cari)
		return pos;
	else if(arr[pos]>cari){
		b=pos-1;;
		return Interpolation(arr,a,b,cari);}
	else if(arr[pos]<cari){
		a=pos+1;;
		return Interpolation(arr,a,b,cari);}
	else if(b>a)
		return 1;
}

int BubbleUp(int arr[10],int i){
	int h, g;
	
	for( h=i+1;h<10;h++){
        if(arr[h]<arr[i]){
            g=arr[i];
            arr[i]=arr[h];
            arr[h]=g;
        }
    }
    
    i++;
    if(i<10)
    	return BubbleUp(arr,i);
    else
    	return 0;
}

int BubbleDown(int arr[10],int i){
	int h, g;
	
	for( h=i+1;h<10;h++){
        if(arr[h]>arr[i]){
            g=arr[i];
            arr[i]=arr[h];
            arr[h]=g;
        }
    }
	i++;
    if(i<10)
    	return BubbleDown(arr,i);
    else
    	return 0;
}


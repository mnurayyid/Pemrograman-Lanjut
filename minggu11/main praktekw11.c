#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int data[10], kecil, i, j, temp;
	
	for(i=0;i<10;i++){
		data[i] = rand() %100+15;
	}
	
	for(i=0;i<10;i++){
		printf("%i ",data[i]);
	}
	
	printf("\n");
	//selection sort
	for(i=0;i<10-1;i++){
		kecil=i;
        for( j=i+1;j<10;j++){
            if(data[j]<data[kecil]){
               temp=data[j];
               data[j]=data[kecil];
               data[kecil]=temp;
            }
        }
        printf("\nIterasi Ke-%i\t:\t",i);
		for(j=0;j<10;j++){
			printf("%i ",data[j]);
		}
    }
	
	printf("\n\nPengurutan Ascending Selesai !\n");
	for(i=0;i<10;i++){
		printf("%i ",data[i]);
	}
	
	printf("\n\n");
	//selection sort
	for(i=0;i<10-1;i++){
		kecil=i;
        for( j=i+1;j<10;j++){
            if(data[j]>data[kecil]){
               temp=data[j];
               data[j]=data[kecil];
               data[kecil]=temp;
            }
        }
        printf("\nIterasi Ke-%i\t:\t",i);
		for(j=0;j<10;j++){
			printf("%i ",data[j]);
		}
    }
	
	printf("\n\nPengurutan Discending Selesai !\n");
	for(i=0;i<10;i++){
		printf("%i ",data[i]);
	}
	
	return 0;
}

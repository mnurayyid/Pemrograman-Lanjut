#include <stdio.h>
#include <stdlib.h>

void cetak(){
	static int count=0;
	printf("\ncount=%i",count++);
}

int main() {
	
	static int i;
	printf("%i",i);
	
	for(i=0;i<5;i++)cetak();
	for(i=0;i<3;i++)cetak();
	
	return 0;
}

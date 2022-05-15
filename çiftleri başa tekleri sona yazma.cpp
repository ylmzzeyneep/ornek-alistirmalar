#include <stdio.h>
#include <stdlib.h>
int main(){
	int i=0;
	int sayi, *gecici;
	int *p;
	
	p = (int*)malloc(1 * sizeof(int));
	
	printf("bir sayi giriniz:");
	scanf("%d", &sayi);
	
	while(sayi> 0){
		if (sayi % 2 == 0){
            i++;
            p = (int*)realloc(p, i*sizeof(int));
            *(p+i) = *p % 10;
}
        else{
            j++;
            p = (int*)realloc(p,j*sizeof(int));
            *(gecici+j-1)= sayi % 10;
        }
        
     
    
}
       
       free(p);
       return 0;
}

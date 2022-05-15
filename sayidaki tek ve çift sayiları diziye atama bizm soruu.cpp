#include <stdio.h>
#include <stdlib.h>
int main() {
	int *tek, *cift, *sayi;
	int t=0, c=0;
	int n, m, i=0;

	
	cift = (int*)malloc(c*sizeof(int));
    tek = (int*)malloc(t*sizeof(int));

	printf("Sayi girin:");
	scanf("%d", *sayi);


	while(sayi> 0) {
		if (sayi[i]%2==0){
            c++;
            cift = (int*)realloc(cift,c*sizeof(int));
            *(cift+c)= *sayi % 10;
            }

		else{
		t++;
		tek = (int*)realloc(tek,t*sizeof(int));
		*(tek+t)= *sayi % 10;
		}

	}

	for(int temp=0;temp<t;temp++)
    {
    printf("%d",*(tek+temp));

}
    printf("\n");
    for(int temp=0;temp<c;temp++)
    {
    printf("%d",*(cift+temp));

}


	return 0;
}

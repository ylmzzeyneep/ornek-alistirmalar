#include <stdio.h>
int dizi[100], max;
int f(int sayi, int n){
	if(n==-1)
	return 0;
	
	if(sayi>max)
	max=sayi;
	return
	f(dizi[n-1], n-1);
}

int main(){
	int i=0, n;
	max=-1;
	
	printf("kac deger gireceksiniz:\n");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("%d. sayiyi giriniz:\n", i+1);
		scanf("%d", &dizi[i]);
	}
	f(dizi[n-1], n-1);
	printf("%d", max);
	return 0;
}

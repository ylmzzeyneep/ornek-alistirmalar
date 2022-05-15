#include <stdio.h>
int asal_sayi_bulma(int a, int i){
	if(a<2)
	return 0;
	
	if(i==1)
	return 1;
	
	if(a%i==0)
	return 0;
	
	return asal_sayi_bulma(a, i-1);
}
int main(){
	int a;
	int sonuc;
	
    printf("birsayiyi giriniz:");
	scanf("%d", &a);
	
	sonuc=asal_sayi_bulma(a, a/2);
	if(sonuc==0)
	printf("%d asal sayi degildir.\n", a);
	
    else
	printf("%d asal sayidir.\n", a);
	return 0;	
}

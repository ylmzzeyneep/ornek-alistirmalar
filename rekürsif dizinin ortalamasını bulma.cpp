#include <stdio.h>
int fonk(int a[], int n){
	if(n<0)
	return 0;
	
	return fonk(a, n-1) + a[n];
}
int main(){
	
	int i, n;
	float ortalama=0, toplam=0;
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &n);
	
	int a[n];
	
	for(i=0; i<n; i++){
	   printf("dizi[%d]:", i);
	   scanf("%d", &a[i]);
}
    
    toplam=fonk(a, n-1);
    ortalama=toplam/n;
    printf("%f", ortalama);
    return 0;
}


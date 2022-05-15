#include <stdio.h>
int us_alma(int taban, int us){
	if(us==0)
	return 1;
	
	else
	return taban * us_alma(taban, us-1);
	
}
int main(){
	int taban, us;
	
	printf("taban sayisini giriniz:");
	scanf("%d", &taban);
	
	printf("us sayisini giriniz:");
	scanf("%d", &us);
	
	printf("%d", us_alma(taban,us));
	return 0;
}




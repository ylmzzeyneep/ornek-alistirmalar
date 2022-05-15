#include <stdio.h>
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}
 
int okek(int x, int y) {
    return x * y / obeb(x, y);
}

int main() {
    int x, y;
    
    printf("birinci sayiyi giriniz:");
    scanf("%d", &x);

    printf("ikinci sayiyi giriniz:");
    scanf("%d", &y);

    printf("%d\n",okek(x, y));
    return 0;
}
 


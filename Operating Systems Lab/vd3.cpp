#include<stdio.h>
int main() {
    int n;
    int sum = 0, temp;
    printf("Nhap n: ");
    scanf("%d",&n);
    while (n != 0) {
        temp = n % 10;
        if (temp % 2 == 0)
            sum += temp;
        n /= 10;
    }
    printf("Tong cac so chan trong so nguyen la: %d",sum);
    
    return 0;
}

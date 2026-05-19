// WAP to find a power a^b (without using power and multiplication operation).

#include <stdio.h>

int main (){

    int base,power;
    printf("Enter a Base : ");
    scanf("%d",&base);
    printf("Enter a Power : ");
    scanf("%d",&power);

    int ans=1;
    for(int i=1 ; i<=power ; i++){
        int temp=0;
        for(int j=1 ; j<=base ; j++){
            temp+=ans;
        }
        ans = temp;
    }

    printf("Power of %d^%d = %d",base,power,ans);
    return 0;
}
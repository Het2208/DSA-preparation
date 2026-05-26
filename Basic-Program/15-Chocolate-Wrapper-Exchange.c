// WAP for following Scenario. 
// Given n rupees and a chocolate price of m for each chocolate, with a wrapper exchange offer of 1 
// chocolate per k wrappers, calculate the total number of chocolates you can eat with n rupees. 

#include<stdio.h>

int main(){
    int n , m , k;
    int chocolates = 0;
    printf("Enter a total ruppes : ");
    scanf("%d",&n);

    printf("Enter a chocolate price : ");
    scanf("%d",&m);

    printf("Enter a exchange offer of 1 chocolate per wrapeers : ");
    scanf("%d",&k);

    if(k==1){   
        printf("This offer is not practically possible!");
        return 0;
    }
    chocolates = n / m;
    int wrapper = chocolates;

    while(wrapper >= k){
        int newChocolates = wrapper / k;
        chocolates += newChocolates;
        wrapper = (wrapper % k ) +  newChocolates;
    }

    printf("With %d ruppes you can eat %d chocolates" , n , chocolates);
    return 0;
}


    // WAP to find weather given number is Armstrong number is not.

    #include<stdio.h>
    #include<math.h>

    int main(){
        int n;
        printf("Enter a number to check the number is armstrong or not : ");
        scanf("%d",&n);
        int count=0;

        int temp=n;

        while(temp != 0){
            count++;
            temp /= 10;
        }
        temp=n;
        int result =0, rem = 0;
        while(temp != 0){
            rem = temp%10;
            result += pow(rem,count);
            temp /= 10;
        }

        if(result == n){
            printf("%d Number is Armstrong",n);
        }
        else{
            printf("%d Number is not Armstrong",n);

        }
        return 0;
    }
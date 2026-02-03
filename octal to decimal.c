#include <stdio.h>
#include<math.h>

int main() {
        int x;
        printf("Enter a number : ");
        scanf("%i",&x);
        int temp=x,rev,rem=0,count=0;
        while(temp!=0){
            rev=temp%10;
            rem=rem+rev*pow(8,count);
            count++;
            temp=temp/10;
        }
        printf("%i",rem);
        

    return 0;
}

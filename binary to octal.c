#include <stdio.h>
#include<math.h>

int main() {
    int x;
    printf("number : ");
    scanf("%i",&x);
    int temp = x,rem=0,pos=0;
    while(temp!=0){
        int rev = temp%10;
        rem=rem+rev*pow(2,pos);
        pos++;
        temp=temp/10;
    }
    int rem2=0,pos2=1;

    while(rem!=0){
        int rev2=rem%8;
        rem2=rem2+rev2*pos2;
        rem=rem/8;
        pos2=pos2*10;
        
    }
    printf("%i",rem2);
    return 0;
}

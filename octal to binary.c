
#include <stdio.h>
#include<math.h>

int octtodec(int n){
        int rev,rem=0,count=0;
        while(n!=0){
            rev=n%10;
            rem=rem+rev*pow(8,count);
            count++;
            n=n/10;
        }
        return rem;
        }
        int dectobin(int x){
        int rev,rem=0,place=1;
        while(x!=0){
            rev=x%2;
            rem=rem+rev*place;
            place *=10;
            x/=2;
        }
        return rem;
        }
        int main(){
        int a;
        printf("Enter a Number: ");
        scanf("%i",&a);
        int bin=dectobin(octtodec(a));
        printf("%i",bin);
    return 0;
}

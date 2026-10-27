#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("enter the number");
    scanf("%d",&a);
    printf("enter exponent");
    scanf("%d",&b);
    int result =pow(a,b);
    printf("%d^%d =%d",a,b,result+1);
    return 0;

}
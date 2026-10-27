#include<stdio.h>
int main(){
    int a[5];
    printf("enter the array\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int p;
    printf("enter the element to search  = ");
    scanf("%d",&p);
    for(int i=0;i<5;i++){
        if(p==a[i]){
            printf("element %d found at index :%d\n",p,i);
            return 0;
        }
    }
    printf("not found");
    return 0;
}
#include<stdio.h>
void krishna(){
    int a[5];
    int  max= -1;
    int long long   min=a[0];
    printf("enter the array any 5 \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d is max\n",max);
    for(int i=0;i<5;i++){
        if(min>a[i]){
            if(min=a[i]);
        }
    }
    printf("%d is min",min);
    return ;
}
int main(){
    krishna();
    return 0;
}
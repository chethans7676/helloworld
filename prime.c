#include<stdio.h>
void main(){
    int a,c=0,i,n;
    printf("enter the number");
    scanf("%d",&a);
        for(i=1;i<=n;i++){
            if(a%i==0)
            c++;
        }
        if(c==2)
        printf("prime");
        else
        printf("not prime");
}

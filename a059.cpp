#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,t,i,j,num;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        num=0;
        scanf("%d %d",&a,&b);
        for(j=1;j<31;j++){
            if(j*j>=a&&j*j<=b){
                num+=j*j;
            }
        }
        printf("Case %d: %d\n",i,num);
    }



    return 0;
}

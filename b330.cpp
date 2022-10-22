#include<stdio.h>
int main(){
    int i,n,x,count=0,temp;
    scanf("%d %d",&n,&x);
    for(i=0;i<=n;i++){
        temp=i;
        while(temp){
            if(temp%10==x){
                count++;
            }
            temp/=10;
        }
    }
    printf("%d\n",count);
    return 0;
}

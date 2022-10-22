#include<stdio.h>
int main(){
    int i,num[6]={0x00},a,d,j;
    while(scanf("%d",&a)!=EOF){
        for(j=0;j<a;j++){
            for(i=0;i<4;i++){
                scanf("%d",&num[i]);
            }
            if((num[3]-num[2])==(num[2]-num[1])){
                d=num[2]-num[1];
                for(i=0;i<4;i++){
                    printf("%d ",num[i]);
                }
                printf("%d\n",num[3]+d);
            }
            else if((num[3]/num[2])==(num[2]/num[1])){
                d=num[2]/num[1];
                for(i=0;i<4;i++){
                    printf("%d ",num[i]);
                }
                printf("%d\n",num[3]*(num[2]/num[1]));
            }
        }
    }


    return 0;
}

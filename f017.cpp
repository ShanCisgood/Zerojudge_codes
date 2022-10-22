#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char x[40]={0x00};
    int i;
    scanf("%s",x);
    //printf("%s",&x[1]);
    for(i=0;i<strlen(x);i++){
        if(i==strlen(x)-1){
            printf("%c",x[i]);
        }
        else{
            printf("%c-",x[i]);
        }
    }

    return 0;
}

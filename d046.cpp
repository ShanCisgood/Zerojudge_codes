#include <cstdio>
int main(){
    int arr[101]={0},s=0,tmp,n;
    for(int i=0;i<11;i++)
    	arr[i]=1;
    scanf("%d",&n);
    while(n--){
    	scanf("%d",&tmp);
    	s+=arr[tmp];
	}
    printf("%d",s);
    return 0;
}

#include <cstdio>
int main(){
	int n,f[46]={1,1};
	for(int i=2;i<=45;i++){
		f[i]=f[i-1]+f[i-2];
	}
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",f[n]);
	}
    
    
    return 0;
}

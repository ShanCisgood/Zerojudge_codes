#include<cstdio>
#include<algorithm>
int main(){
    int n,tmp,arr[105]={0};
    bool ch=false;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	scanf("%d",&tmp);
	std::sort(arr,arr+n);
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
		if(tmp==arr[i])
			ch=true;
	}
	if(ch==true)
		printf("Yes");
	else 
		printf("No");
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> que;
	int n,tmp,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&tmp);	
		if(tmp==1){
			scanf("%d",&a);
			que.push(a);
		}
		else if(tmp==2){
			if(!que.empty()){
				printf("%d\n",que.front());
			}
			else{
				printf("-1\n");
			}
		}
		else if(tmp==3&&!que.empty()){
			que.pop();
		}
	}
	
	return 0;
}

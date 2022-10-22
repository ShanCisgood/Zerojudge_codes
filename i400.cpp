#include <bits/stdc++.h>
using namespace std;
deque <char> ans;
char str[101], tmpe[101];
int e[101][101]={0};
int m, n, cnt;
void Change(int m){
	for(int i=n-1;i>=0;i--){
		if(e[m][i]!=1){
			ans.push_front(str[i]);
		}
		else{
			ans.push_back(str[i]);
		}
	}
	int i=0;
	while(!ans.empty()){
		str[i]=ans.front();
		ans.pop_front();
		i++;
	}
}
void RESE(){
	int len=strlen(str);
	char tmp;
	if(len%2==0){
		for(int i=0;i<len/2;i++){
			tmp=str[i];
			str[i]=str[i+len/2];
			str[i+len/2]=tmp;
		}
	}
	else{
		for(int i=0;i<len/2;i++){
			tmp=str[i];
			str[i]=str[i+len/2+1];
			str[i+len/2+1]=tmp;
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>tmpe;
		for(int j=0;j<n;j++){
			e[i][j]=tmpe[j]-'0';
		}
	}
	cin>>str;
	for(int i=m-1;i>=0;i--){
		Change(i);
		cnt=0;
		for(int j=n-1;j>=0;j--){
			cnt+=e[i][j];
		}
		if(cnt%2==1)
			RESE();
	}
	cout<<str;
	
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long dp[105]={1,1};
	for(int i=2;i<=100;i++){
		dp[i]=i*i+dp[i-1];
	}
	
	int n;
	cin>>n;
	while(n!=0){
		cout<<dp[n]<<"\n";
		cin>>n;
	}
    return 0;
}

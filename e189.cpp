#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n%3==0||n==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

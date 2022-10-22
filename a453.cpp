#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(sqrt(b*b-a*4*c)==int(sqrt(b*b-a*4*c))) 
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
	return 0;
}

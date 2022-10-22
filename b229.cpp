#include <iostream>
using namespace std;
unsigned long long int arr[100]={0,3,7};
void F(int n){
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]*2+arr[i-2];
	}
}
int main(){
	int n;
	cin>>n;
	F(n);
	cout<<arr[n];
	
	
	return 0;
}

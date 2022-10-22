#include <iostream>
using namespace std;
int main(){
    int arr[101]={0};
    int n, D, buy, profit=0, tmp;
    cin>>n>>D;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    	if(i==0){
    		buy=arr[i];
		}
		else if(buy==0 && arr[i]<=tmp-D){
			buy=arr[i];
		}
		else if(buy!=0 && arr[i]>=buy+D){
			profit+=arr[i]-buy;
			tmp=arr[i];
			buy=0;
			//cout<<i+1<<" "<<profit<<endl;
		}
		
	}
	cout<<profit<<endl;
    
    
    return 0;
}

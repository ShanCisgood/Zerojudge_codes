#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[156]={0};
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0&&i<n-1&&i!=0){
            if(arr[i+1]>arr[i-1]){
                ans+=arr[i-1];
            }
            else
                ans+=arr[i+1];
        }
        else if(arr[i]==0&&i==n-1)
            ans+=arr[i-1];
        else if(arr[i]==0&&i==0)
            ans+=arr[1];
    }
    cout<<ans;
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        map<int,int> result;
        for(int i=0;i<n;i++){
            result[arr[i]]++;
        }
        int sum=0;

        for(auto x:result){
            sum++;
        }

        cout<<sum<<endl;
    }
}

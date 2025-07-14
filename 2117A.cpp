#include<iostream>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int n=x;

    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    int flag=0;
    int flag1=0;
     for(int i=0;i<n;i++){
        if(arr[i]==1 && flag!=1){
            int p=y;
            flag=1;
            int j=i;
            while(p!=0){
                if(arr[j]==1){
                    arr[j]=0;
                }
                p--;
                j++;
            }
        }
        else if(arr[i]==1 && flag==1){
            flag1=1;
            break;
        }
     }

     if(flag1==0){
        cout<<"Yes"<<endl;
     }
     else{
        cout<<"No"<<endl;
     }
}
}

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        double a=sqrt(n);
        int flag=0;
        int b=0;

        if(a==1){
            cout<<"0"<<" "<<"1"<<endl;
        }
        else if(float(a)==a){
            cout<<"0"<<" "<<a<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}

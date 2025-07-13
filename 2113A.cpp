#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int x,y;
        int a,b;
        cin>>n>>x>>y>>a>>b;

        if(n<x && n<y){
            cout<<"0"<<endl;
            continue;
        }
        int cnt=0;
        if(a<b){
//            while(n>=x){
//                cnt++;
//                n-=a;
//            }

            int p=(n-x)/a;
            n=x;
            cnt+=p;

        }
        else if(b<a){
//            while(n>=y){
//                cnt++;
//                n-=b;
//            }
                int q=(n-y)/b;
                n=y;
                cnt+=q;
        }

        while(n>=x){
            cnt++;
            n-=a;
        }

        while(n>=y){
            cnt++;
            n-=b;
     }

        cout<<cnt<<endl;
    }
}

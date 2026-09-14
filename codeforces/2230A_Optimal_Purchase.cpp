#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    
    while(t--){
        long long n,a,b;cin>>n>>a>>b;
        long long extra =0, suma=0;
        if(n%3>0){
            extra =1;
        }

        if(a>=b){
            cout<<(n/3+extra)*b<<"\n";
            continue;
        }
        else if(3*a<=b){
            cout<<(a*n)<<"\n";
            continue;
        }
        else if(3*a>b){
            if(2*a>b){
                cout<<(n/3+extra)*b<<"\n";
                continue;               
            }
            else{
                cout<<n/3*b+n%3*a<<"\n";
                continue;
            }

        }

    }

    return 0;
}
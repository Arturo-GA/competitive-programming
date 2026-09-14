#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n, resta_min=0; cin>>n;
        bool posible = true;
        vector<long long> x(n);
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
            if(i>=1&&x[i-1]>x[i]) resta_min = max(resta_min, x[i-1]-x[i]);
        }

        for (int i = 1; i < n; i++)
        {
            if(x[i-1]>x[i]){
                if(x[i-1]<=x[i]+resta_min){
                    x[i] += resta_min;
                }
                else if(x[i-1]>x[i]+resta_min){
                    posible=false;
                }
            }

        }   
        
        if(posible== true) cout<<"YES"<<"\n";
        else if(posible== false) cout<<"NO"<<"\n";
        
    }

    return 0;
}
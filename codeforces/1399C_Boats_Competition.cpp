#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin>>x[i];
        sort(x.begin(),x.end()); 

        int cant=101, cuenta_max=0;
        while(cant--&&(n>1)){
            int a=0, b=n-1, cuenta=0;
            if((x[b]+x[b-1])>=cant && (x[a]+x[a+1])<=cant){
                while(a<b){
                    if(x[a]+x[b]==cant){
                        cuenta++, a++, b--;
                    }
                    else if(x[b]+x[a]<cant){
                        a++;
                    }
                    else if((x[b]+x[a])>cant){
                        b--;
                    }

                }
            
            }
            cuenta_max = max(cuenta, cuenta_max);   
        }
        cout<< cuenta_max<<"\n";
    }
    return 0;
}
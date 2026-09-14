#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 +7;

int main(){

    

    long long monedas, n;cin>>monedas>>n;
    vector<long long> Mon(monedas);
    for(int i=0;i<monedas;i++)cin>> Mon[i];


    vector<long long> x(n+1,0);
    x[0]=1;


    for(int i=0;i<=n;i++){
        for(int j=0;j<monedas;j++){
            if((i-Mon[j])>=0 && x[i-Mon[j]]!=0){
                x[i] +=  x[i-Mon[j]];
                x[i] %=MOD;
            }

        }
        

    }

    cout<<x[n];

    return 0;
}
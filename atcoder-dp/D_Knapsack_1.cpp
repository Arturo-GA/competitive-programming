#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; long long cap; cin>>n>>cap;   // cap = capacidad de la mochila

    vector<long long> dp(cap+1, 0);

    for(int i=0;i<n;i++){
        long long peso, valor; cin>>peso>>valor;   // datos del objeto i
        for(long long j=cap; j>=peso; j--){
            dp[j] = max(dp[j], dp[j-peso]+valor);
        }
    }

    cout<<dp[cap]<<"\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; long long cap; cin>>n>>cap;

    vector<long long> peso(n), valor(n);
    long long sumaValores = 0;
    for(int i=0;i<n;i++){
        cin>>peso[i]>>valor[i];
        sumaValores += valor[i];
    }

    const long long INF = 1e18;
    vector<long long> dp(sumaValores+1, INF);  // dp[j] = peso minimo para valor j
    dp[0] = 0;                                 // valor 0 se logra sin peso

    for(int i=0;i<n;i++){
        for(long long j=sumaValores; j>=valor[i]; j--){
            dp[j] = min(dp[j], dp[j-valor[i]] + peso[i]);
        }
    }

    for(long long j=sumaValores; j>=0; j--){
        if(dp[j] <= cap){
            cout<<j<<"\n";
            break;
        }
    }

    return 0;
}
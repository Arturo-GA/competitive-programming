#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> x(n); 
        vector<long long> y(n);
        for(int i=0; i<n; i++) cin>>x[i];
        for(int i=0; i<n; i++) cin>>y[i];

        int intermedio=0;
        long long maxa=0, sumab=0;
        for (int i = 0; i < n; i++)
        {
            if(x[i]>y[i]) 
            { 
                intermedio = x[i];
                x[i] =y[i];
                y[i]=intermedio;
            }
            maxa =max(maxa,x[i]);
            sumab += y[i];

        }
        cout<<maxa+sumab<<"\n";
        
        
    }
    return 0;
}
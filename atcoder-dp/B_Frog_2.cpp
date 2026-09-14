#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;


    vector<int> x(n);
    vector<int> y(n);

    for(int i=0;i<n;i++) cin >>x[i];

    y[0]=0;
    for(int i=1;i<=k&& i<n;i++){
        y[i]=abs(x[i]-x[0]);
    }

    
    for(int i=k+1;i<n;i++){
        int prueba = INT_MAX;
        for(int j=1 ; j<=k ; j++){

            prueba=min(prueba, y[i-j]+abs(x[i]-x[i-j]) );
        }
        y[i] = prueba;
            //cout<<y[i]<<"\n";

    }
    cout<<y[n-1];


    return 0;
}
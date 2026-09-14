#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++) cin >>x[i];

    y[1]=abs(x[1]-x[0]);
    y[2]=abs(x[2]-x[0]);
    for(int i=3;i<n;i++){
        y[i]=min(y[i-1]+abs(x[i]-x[i-1]), y[i-2]+abs(x[i]-x[i-2]) );
        //cout<<y[i]<<"\n";

    }
    cout<<y[n-1];


    return 0;
}
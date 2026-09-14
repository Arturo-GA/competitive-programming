#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    double minimo=0.0;

    cin >> a >> b;
    vector<int> x(a);
    for(int ii=0;ii<a;ii++){
        cin>> x[ii];
        //cout << x[ii]<<"\n";
    }

    sort(x.begin(),x.end());
    //cout << x[1]<<"X ejemplo sort "<<"\n";
    int i=0;
    minimo = x[0]-0;
    //cout << minimo<<"Inicio"<<"\n";
    for(i=1; i < a;i++){
        if ((x[i]-x[i-1])/2.00>minimo){
            minimo = ((x[i]-x[i-1])/2.0);
        }
        // cout << minimo<<" x "<<x[i]<<"\n";

    }

    if(minimo < b - x[i-1]){
        minimo = b - x[i-1];
    }
    cout <<fixed << setprecision(10)<< minimo;

    return 0;
}

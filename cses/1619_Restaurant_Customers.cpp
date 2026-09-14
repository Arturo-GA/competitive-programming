#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    int maxi=0;
    vector<int> x(a),y(a);
    for (int i = 0; i < a; i++)
    {
        cin>>x[i]>>y[i];
        maxi = max(maxi,y[i]);
    }
    
    vector<int> z(maxi+1);

    for (int i = 0; i < a; i++)
    {
        z[x[i]] += 1;
        z[y[i]] -= 1; 
    }


    int cuenta=0, resultado=0;
    for (int i = 0; i < maxi; i++)
    {
        cuenta +=z[i];
        resultado = max(cuenta, resultado); 
    }
    

    cout<< resultado;

    return 0;

}
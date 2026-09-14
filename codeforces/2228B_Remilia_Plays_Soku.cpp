#include <bits/stdc++.h>
using namespace std;

int main(){
    int z; cin>>z;
    while(z--){
        int n,x1,x2,k, salida; 
        cin>>n>>x1>>x2>>k;
        if(x1==x2)
            salida=0;
        else if(x1>=x2)
            salida = x1-x2 + k;
        else if(x1<x2)
            salida = x2-x1 + k;
        cout<<salida<<"\n";
    }
    return 0;

}
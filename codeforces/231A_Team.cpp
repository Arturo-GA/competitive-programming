#include <bits/stdc++.h>
using namespace std;

int main(){
    int probl,cuenta=0;
    int a[1000],b[1000],c[1000];
    
    cin >> probl;
    for(int i=0; i<probl;i++){
        cin >> a[i]>>b[i]>>c[i];
        if(a[i]+b[i]+c[i]>=2){
            cuenta++;
        }
    }
    cout << cuenta;
    return 0;
    
}
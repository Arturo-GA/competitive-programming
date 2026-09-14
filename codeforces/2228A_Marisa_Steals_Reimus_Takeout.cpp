#include <bits/stdc++.h>
using namespace std;

int main(){
    int z; cin>>z;
    while(z--){
        int n; cin>>n;
        vector<int> x(n);
        int zeros =0, unos=0,dos=0, cuenta=0;
        for(int i=0;i<n;i++){
            cin>>x[i];
            if(x[i]==0)
                zeros++;
            else if(x[i]==1)
                unos++;
            
            else if(x[i]==2)
                dos++;
        }

        cuenta = zeros;
        if(dos>=unos){
            cuenta += dos-unos+1;
        }
        else if (unos>dos)
            cuenta += unos - dos +1;

        cout<<cuenta<<"\n";
    }
    return 0;
}
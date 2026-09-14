#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >>a;

    for (int r = 0; r < a; r++)
    {
        int b;
        cin >> b;
        vector<int> v(b);
        int maximo =0;
        int valido =0;
        for (int p = 0; p < b; p++)
        {
            cin>>v[p];
            maximo = max(v[p],maximo);
        }

        for (int p = 0; p < b&&valido==0; p++)
        {
            if((maximo-v[p])%2!=0){
                valido=1;

            }

        }

        if(valido==0){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

        
    }
    

    return 0;
}
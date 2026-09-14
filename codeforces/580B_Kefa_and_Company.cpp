#include <bits/stdc++.h>
using namespace std;
  
int main(){
    long long a,b;
    
    cin>>a>>b;
    vector <pair<long long,long long>> x(a);
    for (int i = 0; i < a; i++) cin >> x[i].first>>x[i].second;
    sort(x.begin(),x.end(), [](pair<long long,long long> p, pair<long long,long long> k){
        return p.first < k.first;
    });
    
    int j=0;
    long long maximo =0;
    long long cuenta=0;
    for (int i = 0; i < a; i++)
    {


        while(j<a && x[j].first-x[i].first < b)
        {
            //cout<<cuenta<<"  cuenta "<<maximo<<" i "<<i<<" j "<<j<<"-"<<x[j].first<<"  -  "<<x[j].second<<"\n";
            cuenta += x[j].second;
            j++;
        }

        //cout<<cuenta<<"  cuenta "<<maximo<<" i "<<i<<" j "<<j<<"-"<<x[j].first<<"  -  "<<x[j].second<<"\n";

        
        maximo = max(cuenta, maximo);
   
        cuenta = cuenta - x[i].second;

    }
    cout<<maximo;





    return 0;
}
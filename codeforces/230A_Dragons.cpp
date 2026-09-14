#include <bits/stdc++.h>
using namespace std;


int a,b,suma;
int main(){
    cin >> a>>b;
    vector <int> x(b);
    vector <int> y(b);
    for (int i = 0; i < b; i++)
    {
        cin >> x[i]>>y[i];    
    }

    vector <pair<int,int>> v;
    for (int i = 0; i < b; i++)
    {
        v.push_back({x[i],y[i]});
    }
    sort(v.begin(),v.end());
    

    for (int i = 0; i < b; i++)
    {
        x[i]=v[i].first;
        y[i]=v[i].second;
    }
    suma=0;
    int ii = 0,jj=0;
    for (ii = 0; ii < b && jj==ii; ii++)
    {
        if(a>x[ii]){   
            a += y[ii];
            jj++;
        }

    }

    if(jj==b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    
    return 0;
}
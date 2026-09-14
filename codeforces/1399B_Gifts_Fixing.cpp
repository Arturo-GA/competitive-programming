# include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>b;
    for (int j = 0; j< b; j++)
    {
        /* code */
    
    
        cin >> a;
        long long minx=99900000000,miny=99900000000,cuenta=0;
        long long cero=0;

        vector<long long> x(a);
        vector<long long> y(a);
        for (int i = 0; i < a; i++) 
        { 
            cin>>x[i];
            minx =min(minx,x[i]);
        }
        for (int i = 0; i < a; i++)
        {
            cin>>y[i];    
            miny =min(miny,y[i]);
        }

        long long maxintermedio;
        for (int i = 0; i < a; i++) {

            cuenta += max({cero,y[i]-miny,x[i]-minx});
            //cout<<cuenta<<" i "<<i<<miny<<" miny minx "<<minx<<"\n";
        }


        cout<<cuenta<<"\n";
        
    }


    return 0;
}
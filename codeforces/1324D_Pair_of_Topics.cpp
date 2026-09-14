#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,cuenta=0;
    cin>>a;
    vector<long long> x(a);
    vector<long long> y(a);
    vector<long long> z(a);

    for (int i = 0; i < a; i++) cin >> x[i];
    for (int i = 0; i < a; i++) cin >> y[i];
    for (int i = 0; i < a; i++) z[i] = x[i]-y[i];

    sort(z.begin(),z.end());






    for (int i = 0; i < a; i++)
    {
        int lo=i+1;
        int hi=a-1;
        int pos = a;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;

            if(z[i]+z[mid]>0){
                pos =mid;
                hi =mid-1;
                cout<<cuenta<<" si "<<lo<<" z[i] "<<mid<<" i "<<z[mid]<< " hi "<<hi<<"\n";
            }
            else{
                lo =mid +1;
                cout<<cuenta<<" no "<<lo<<" z[i] "<<mid<<" i "<<z[mid]<< " hi "<<hi<<"\n";
            }
        }
        cuenta += a-pos;
        

    }




    /*
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if(z[i]+z[j]>0){
                cuenta += a-j;
                
                
                //cuenta++;
                //cout<<cuenta<<" - "<<z[i]<<" z[i] "<<i<<" i "<<z[j]<<"\n";
                j=a;
            }
        }
    }

    */

    cout<<cuenta;
    
    

    return 0;
}
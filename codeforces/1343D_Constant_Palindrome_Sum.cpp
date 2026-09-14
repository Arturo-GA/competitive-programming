#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long a,b,l,r;
        cin>> a>>b;
        vector<long long> x(a);
        vector<long long> diff(2*b+2);
        diff[0]=0;
        for (int j = 0; j < a; j++) cin>>x[j];


        for (int i = 0; i < a/2; i++)
        {
            l=x[i];
            r=x[a-1-i];

            diff[2]+=2;
            diff[b*2+1]-=2;
            
            diff[min(l,r)+1] -= 1;
            diff[max(l,r)+b+1] += 1;

            diff[l+r] -=1;
            diff[l+r+1] +=1;


            
            
            
        }

        long long ans=2*a*b,resp=0;
        for (int kk = 2; kk <= 2*b; kk++)
        {
            resp += diff[kk];
            ans = min(resp,ans);
        }

        cout<<ans<<"\n";
        
    }
    
    return 0;
}
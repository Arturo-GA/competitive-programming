#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> x(n);
        vector<int> y(2000,0);
        if(n == 1){
            cout<<1<<"\n";
        }
        else if(n>1){
            x[0]=1;
            y[1]++;
            cout<<1<<" ";
            int j =1;
            for (int i = 2; i < 2*n && j<n; i++)
            {
                if(y[i]==0 && y[i+x[j-1]]==0){
                    cout<<i<<" ";
                    y[i]++;
                    x[j]=i;
                    y[x[j]+x[j-1]]++;
                    j++;
                }

            }
            cout<<"\n";
        }
        

        
    }

    return 0;
}
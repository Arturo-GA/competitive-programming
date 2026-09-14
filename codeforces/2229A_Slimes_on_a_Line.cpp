#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> x(n);
        vector<int> y(1001,0);
        for(int i=0; i<n; i++) cin>>x[i];
        sort(x.begin(),x.end());
        int a=n;
        
        for(int i=0; i<n;i++){
            int actual = x[i];
            for(int j=x[0]; j<=x[n-1];j++){
                int cuenta=0;
                if(actual >j) {
                    cuenta = actual-j;
                }  
                else if(j>actual){
                    cuenta =j-actual;
                }
                

                y[j] = max(y[j],cuenta);
            }
        }


        if(x[0]==x[n-1]){
            cout<<0<<"\n";
            continue;
        }
        int minimo=99999;
        for(int i=0; i<1001;i++){
            if(y[i]!=0){
                minimo = min(y[i], minimo);
            }   
        }
        cout<<minimo<<"\n";       
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> a(n,vector<int> (n));
        for(int j=0;j<n;j++){
            string linea; cin>> linea;
            for(int i=0;i<n;i++) 
            {
                a[j][i] = linea[i]-'0';
            }

        }
        bool verdadero =true;
        for(int j=0;j<n;j++){
            for(int i=0;i<n;i++) 
            {
                if(j!=(n-1)&&i !=(n-1) &&a[j][i]==1&&a[j+1][i]==0&&a[j][i+1]==0){
                    verdadero =false;
                    break;
                }
                 
            }

        }
        
        if (verdadero==false) cout<<"NO"<<"\n";
        else if  (verdadero==true) cout<<"YES"<<"\n";


    }

    return 0;
}
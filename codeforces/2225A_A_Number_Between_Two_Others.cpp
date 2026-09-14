#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long x, y, val=0, mul=2; cin>>x>>y;
        while (x*mul<y && val==0)
        {
            if((x*mul<y)&&((x*mul)%y)!=0){
                cout<<"Yes"<<"\n";
                val=1;
            }
            else{
                mul++;
            }
        }
        if(val==0) cout<<"No"<<"\n";   
    }
    return 0;
}
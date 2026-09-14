#include <bits/stdc++.h>
using namespace std;


int b,t;

int main(){

    cin >> b;
    while(b--){
        int xx,yy;
        cin >> xx >> yy;

        vector<int> x(xx);
        vector<int> y(xx);  
        vector<int> z(xx);       
        for (size_t i = 0; i < xx; i++)
        {
            cin >>x[i];
        }
        for (size_t i = 0; i < xx; i++)
        {
            cin >>y[i];
        }
        
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        int r=xx-1,k=xx-1,cuenta=0,sumat=0;
        for (int j = 0; j < xx ; j++)
        {
            if(x[r]>=y[k]){

                sumat += x[r];
                r--;
            }
            else if (yy>cuenta)
            {
                sumat += y[k];
                k--;
                cuenta++;
                
            }
            else{
                sumat += x[r];  
                r--;
                             
            }

        }

        cout<<sumat<<"\n";
        
        
    }
    return 0;
}
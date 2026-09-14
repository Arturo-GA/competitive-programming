#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    for (int rr = 0; rr < a; rr++)
    {
        int uno=0, dos=0,tres=0;


        cin>>b;
        vector<int> x(b);
        for (int i = 0; i < b; i++)
        {
            cin>>x[i];
        }
        int ii = 0,jj=1,kk=2,salida=0;
        
        if(x[ii]+x[jj]<=x[b-1]||x[ii]>=x[jj]+x[b-1]||x[jj]>=x[ii]+x[b-1]){
            salida=1;
                    //cout<<ii<<" "<<jj<<" "<<kk<<"\n";
        }
    

        if(salida==1){
            cout<<ii+1<<" "<<jj+1<<" "<<b<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
        

    }
    return 0;
}

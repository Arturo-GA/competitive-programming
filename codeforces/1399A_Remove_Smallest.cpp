# include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>b;
    for (int j = 0; j< b; j++)
    {
        /* code */
    
    
        cin >> a;
        vector<int> x(a);
        for (int i = 0; i < a; i++) cin>>x[i];
        sort(x.begin(),x.end());

        int salida=0;
        for (int r = 0; r < a&&salida==0; r++)
        {
            if(x[r+1]-x[r]>1&& r+1<a){
                salida=1;
                //cout<<"cuando entro al no? "<<x[r]<<" x[r+1] "<<x[r+1]<<" resta "<<x[r+1]-x[r]<<"\n";
            }
        }

        if(salida==1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }


    return 0;
}
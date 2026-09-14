#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    long long b,c,suma;
    for (int i = 0; i < a; i++)
    {
        
        cin>>b>>c;
        suma=b;
        bool resuelto =false;
        //for(int k=0; k<c;k++){
        if(b%2==c%2&&b>=c){
                cout<<"YES"<<"\n";
                int j=0;
                for (j = 0; j < c-1; j++)
                {
                    
                    cout<<1<<" ";

                }
                cout<<b-j*1<<"\n";
                resuelto = true;
                
        }
        else if(c%2==1&&b>=2*c){
                cout<<"YES"<<"\n";
                int k=0;
                for (k = 0; k < c-1; k++)
                {
                    cout<<2<<" ";
                }
                cout<<b-k*2<<"\n";
                resuelto = true;
        }

        else if(resuelto == false){
            cout<<"NO"<<"\n";
        }
        
            
        //}     



    }
    
    



    return 0;
}
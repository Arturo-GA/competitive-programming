#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    cin>>a;
    vector<int>x(a);
    for (int i = 0; i < a; i++)
    {
        cin>>x[i];
    }
    cin>>b;
    vector<int>y(b);
    for (int i = 0; i < b; i++)
    {
        cin>>y[i];
    }

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    //cout<<"Ya ordeno";
    int izqa=0,izqb=0;
    int suma=0;
    if(a>=b){
        izqb=0;
        izqa=0;
        for (int i = 0; i < b; i++)
        {
            izqa=izqb;
            while (izqa<a){
             
                if(abs(y[i]-x[izqa])<=1){
                    //cout<<y[i]<<" x[i]-y[izqa] " <<x[izqa]<<" izqa "<<izqa<<" izqb "<<izqb<<" i "<<i<<"\n";
                    izqa++;
                    izqb=izqa;
                    izqa=a;
                    suma++;
                    
                }
                else if(abs(y[i]-x[izqa])>1){
                    izqa++;
                }
            }
            
   

        }
        cout<<suma; 
    }
    else if(a<b){
        izqb=0;
        izqa=0;
        for (int i = 0; i < a; i++)
        {
            izqa=izqb;
            while (izqa<b){
             
                if(abs(x[i]-y[izqa])<=1){
                    izqa++;
                    izqb=izqa;
                    izqa=b;
                    suma++;
                }
                else if(abs(x[i]-y[izqa])>1){
                    izqa++;
                }
            }
            
   

        }
        cout<<suma; 
    }

    return 0;
}

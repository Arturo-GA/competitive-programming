#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,cervezas;
    cin >>a;
    vector<int> v(a);
    for (int r = 0; r < a; r++)
    {
        cin>>v[r];
    }
    sort(v.begin(),v.end());

    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cervezas = 0;
        c=0;
        cin>>c;

        int lim_inf=0;
        int salida=0;
        for (int j = a-1; j >= 0&&salida==0; j--)
        {
            if(c>=v[j]){
                cervezas=j+1;
                salida=1;
            }
            else if( v[(lim_inf+j)/2]>c&&j-lim_inf>3){
                j=(lim_inf+j)/2+1;
            }
            else if( v[(lim_inf+j)/2]<=c&&j-lim_inf>3){
                lim_inf=(lim_inf+j)/2;
            }
 
        }
        if(salida==0){
            cout<< 0<<"\n";           
        }
        else{
            cout<< cervezas<<"\n";
        }
    }
    
    return 0;

}
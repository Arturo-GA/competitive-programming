#include <bits/stdc++.h>
using namespace std;


int sumaj=0;
int main(){
    int a,b,c,suma=0, maxima=0;
    int der,izq,resta;
    //double minimo=0.0;

    cin >> a>>b;
    vector<int> v(a);
    for(int ii=0;ii<a;ii++){
        cin >> c;
        v[ii]=c;
    }
    der=0;
    izq=0;

    maxima=0;
    suma=0;
    int j=0;
    for(int i=0;i<a;i++){  
//        while(suma>=b)
//       { 
        if(i != 0){
            suma-=v[i-1];
        }
//          suma -= v[i];
//            i++;
        //cout<<"no v[i] " << v[i]<<" suma "<<suma<<" i "<<i<<"\n";
//        } 
        while (b>= suma+v[j]&&j<a)
        {
            suma +=v[j];
            //cout<<"es v[j] " << v[j]<<" suma "<<suma<<" j "<<j<<"\n";
            j++;


        }
  
        maxima=max(j-i,maxima);
        //cout<<"v[j] " << v[j]<<" suma "<<suma<<" i "<<i<<" maxima "<<maxima<<"\n";
    }
    cout<<maxima;
    
    return 0;
}
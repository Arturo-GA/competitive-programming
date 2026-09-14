#include <bits/stdc++.h>
using namespace std;


int a,tota=0;
int main(){
    cin>>a;

    int x[a];
    for (int i = 0; i < a; i++) 
    {
        cin>>x[i];
        tota += x[i];
    }

    int izq=0,dere=a-1;
    int sumIzq=0, sumDer=0;
    while ( izq<=dere)
    {
        if(izq<dere && sumIzq<sumDer){
            sumIzq += x[izq];
            izq++;
        }
        else if(dere>izq&& sumIzq>sumDer){
            sumDer += x[dere];
            dere--;
        }
        else if(dere>=izq+1&& sumIzq==sumDer){
            sumIzq += x[izq];
            izq++;
            sumDer += x[dere];
            dere--;                
        }

        else if(dere==izq && sumIzq<=sumDer ){
            sumIzq += x[izq];
            izq++;  
        }
        else if(dere==izq && sumIzq>sumDer ){
            sumDer += x[dere];
            dere--;       
        }

    }
    
    cout << izq<<" "<<a-1-dere;
    return 0;
}
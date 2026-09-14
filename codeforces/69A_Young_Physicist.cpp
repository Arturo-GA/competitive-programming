#include <bits/stdc++.h>
using namespace std;


int num,a,b,c;
int suma=0,sumb=0,sumc=0;
int vect[3][100];
int main(){
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin>>a>>b>>c;
        vect[0][i]=a;
        vect[1][i]=b;
        vect[2][i]=c;
    }

    for(int j=0;j<num;j++){
        suma=vect[0][j]+suma;
        sumb=vect[1][j]+sumb;
        sumc=vect[2][j]+sumc;
    }
    //cout << "suma"<<suma;
    //cout << "sumb"<<sumb;
    //cout << "sumc"<<sumc;
    if(suma==0 && sumb==0 &&sumc==0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string s;
int unos=0;
int dos=0;
int tres=0;
int numeros=0;
string out;
int main(){
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        //cout << i;
        //cout << "int(s[i])"<<int(s[i]);

        
        if(s[i]=='1'){
            unos++;
            numeros++;
            //cout << "int(s[i])"<<int(s[i]);
        }
        else if (s[i] =='2'){
            dos++;
            numeros++;
            //cout << "int(s[i])"<<int(s[i]);
        }
        else if (s[i]=='3'){
            tres++;
            numeros++;
            //cout << "int(s[i])"<<int(s[i]);
        }
    }
    //cout << unos;
    //cout << dos;
    //cout << tres;
    for(int j=0;j<unos;j++){
        numeros--;
        cout << "1";
        if(numeros>0){
            cout <<"+";
        }
    }
    for(int j=0;j<dos;j++){
        numeros--;
        cout << "2";
        if(numeros>0){
            cout <<"+";
        }
    }
    for(int j=0;j<tres;j++){
        numeros--;
        cout << "3";
        if(numeros>0){
            cout <<"+";
        }
    }    

    return 0;
}
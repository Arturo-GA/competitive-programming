#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;   // lee un entero


    string s;
    for (int i=0; i<n;i++){
        cin >> s;   // lee una palabra (sin espacios)
        int lent = s.length();
        int j;
        if(lent > 10){
            cout <<  s[0]; 
            cout <<  lent-2; 
            cout <<  s[lent-1] << "\n"; 
        }
        else{
            cout <<  s << "\n"; 
        }
    }


    return 0;
}

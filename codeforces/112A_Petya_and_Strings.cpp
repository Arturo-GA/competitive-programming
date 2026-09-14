#include <bits/stdc++.h>
using namespace std;


map <char, int> alf;
string a;
string b;
//int result;
int main(){
    for ( char c = 'A' ; c <='Z' ;c++){
        alf[c] = c - 'A' + 1;
        alf[c+32] = c - 'A' + 1;
    }
    
    cin >> a;
    cin >> b;
        
    for ( int i=0; i < a.length(); i++ )
    {
        if(alf[a[i]]>alf[b[i]]){
            cout << 1;
            return 0;
        }
        if(alf[a[i]]<alf[b[i]]){
            cout << -1;
            return 0;
        }
    }
    
    cout << 0;

    return 0;
}
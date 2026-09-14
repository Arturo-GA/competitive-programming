#include <bits/stdc++.h>
using namespace std;


int state;
int x=0;
string oper;
int main(){
    cin >> state;
    for(int i=0;i<state;i++){
        cin >> oper;
        if(oper =="X++" || oper =="++X"){
            x++;
        }
        else if (oper =="--X"||oper =="X--")
        {
            x--;
        }
        
    }
    cout << x;
    return 0;
}
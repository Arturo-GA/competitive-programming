#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;
    int tam= t.length(), val=0;
    stack<char> x;

    char second_last,last;
    x.push(t[0]);
    int vall=0;
    for(int i=1;i<tam;i++){
        if(x.empty()==false) second_last = x.top(), vall=0;
        else vall=1;
        last = t[i];
        x.push(t[i]);
        //cout<<t[i]<<"  "<<i<<" top "<<x.top()<<"\n";


        if(vall==0&&last ==second_last){
            x.pop();
            x.pop();
        }
        //cout<<t[i]<<"  "<<i<<" top "<<"salida"<<x.size()<<"\n";
    }

    if(x.empty()) cout<<"Yes";
    else cout<<"No";



    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int a,b,c, resp;
int main(){
    cin>>a>>b>>c;


    resp =a*(c*(c+1))/2;
    if(resp>b){
        cout<<resp-b;
    }
    else{
        cout<<0;
    }


    return 0;
}
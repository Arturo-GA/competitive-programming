#include <bits/stdc++.h>
using namespace std;

long long a,b,c,cant;
int main(){
    cin >> a >> b >>c ;
    cant =(((a+c-1)/c))*(((b+c-1)/c));

    cout << cant;
    return 0;
}
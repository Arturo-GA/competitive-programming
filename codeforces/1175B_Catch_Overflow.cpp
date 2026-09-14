#include <bits/stdc++.h>
using namespace std;


int main(){
    int r;
    string s;
    long long n;
    long long m=1, suma=0;
    const long long Limit = (1LL << 32 )-1;
    stack<long long> v;
    v.push(1);
    
    cin>>r;
    while(r--){
        cin >> s; 
        if(s=="for"){
            cin>>n;
            if(n>Limit/v.top()){
                v.push(Limit+1);
            }
            else{ 
                m = n*v.top(); 
                v.push(m);
            }
        }
        else if(s=="end"){
            v.pop();
        }
        else if(s=="add"){
            if(suma>Limit- v.top()){
                cout<<"OVERFLOW!!!";
                return 0;
            }
            
            suma += v.top();
        }
        

    }
    cout<<suma;


    return 0;
}







/*
int main() {
    int t;
    cin >> t;

    const long long LIMIT = (1LL << 32) - 1;
    stack<long long> st;
    st.push(1);
    long long suma = 0;

    while (t--) {
        string s;
        cin >> s;

        if (s == "for") {
            long long n;
            cin >> n;
            long long top = st.top();

            if (top > LIMIT / n) {
                st.push(LIMIT + 1);
            } else {
                st.push(top * n);
            }
        }
        else if (s == "end") {
            st.pop();
        }
        else if (s == "add") {
            if (suma > LIMIT - st.top()) {
                cout << "OVERFLOW!!!\n";
                return 0;
            }
            suma += st.top();
        }
    }

    cout << suma;
}

*/
/*
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t, countF=0, countE=0;
    
    cin >>t;
    cin.ignore();
    vector<string> r(t);
    vector<int> v(t);
 
    const long long LIMIT = (1LL << 32) - 1;
 
    for ( int i = 0; i < t; i++)
    {
        getline(cin,r[i]);
        if(r[i].substr(0,3)=="for"){
            v[i] =stoi( r[i].substr(4) );
            r[i] ="for";
        }
        else if(r[i]=="add")
        {
            v[i] = 0;
        }
        else if(r[i]=="end")
        {
            v[i] = 0;
        }
    }
 
 
 
 
 
    long long cuenta=0;
    long long multiplicador=1;
    long long suma =0;
    while(t--){
        if(r[t]=="end") cuenta++;
        else if(r[t]=="for") cuenta --;
        
        
        if(r[t]=="add"){
            int j = t-1;
            int cuenta2=cuenta;
            int balance =0;
            while (cuenta2>0&&j>=0)
            {
                if(r[j]=="end") {
                    balance++;
                }
                else if(r[j]=="for")
                {
                    if(balance==0){
                        if (multiplicador > LIMIT / v[j]) {
                            multiplicador = LIMIT + 1;
                        } else {
                            multiplicador *= v[j];
                        }
                        cuenta2--;
                    }
                    else{
                        balance--;
                    }
                    
                }
 
                j--;
            }
 
            if (suma > LIMIT - multiplicador) {
                cout << "OVERFLOW!!!\n";
                return 0;
            }
 
 
 
            suma += multiplicador;
 
            multiplicador=1;
            
        }
 
 
 
    }
 
    cout<<suma;
 
 
 
    return 0;
}

*/
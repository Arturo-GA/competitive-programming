#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b, parity=0, parr,imparr;
    for (int j = 0; j < a; j++)
    {
        parity=0;
        parr=0;
        imparr=0;
        cin>>b;
        vector<int> x(b);
        for (int i = 0; i < b; i++)
        {
            cin>>x[i];
            if(x[i]%2==i%2){
                parity++;
            }
            else if (x[i]%2!=i%2 &&x[i]%2==0)
            {
                parr++;
            }
             else if (x[i]%2!=i%2 &&x[i]%2!=0)
            {
                imparr++;
            }           
            //cout<<x[i]%2<< " x[i]%2==i%2 "<<i%2 <<"   " <<parity<<"\n";

        }

        if(((b-parity)%2)==0&&imparr==parr){
            cout <<(b - parity)/2<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }

    }
    

    
    

    return 0;
}
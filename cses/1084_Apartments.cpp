#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    vector<long long> x(a), y(b);

    for(long long i = 0; i < a; i++) cin >> x[i];
    for(long long i = 0; i < b; i++) cin >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    long long cuneta = 0;
    long long j = 0;

    for(long long i = 0; i < a && j < b; i++){
        // salta personas demasiado pequeñas
        while(j < b && y[j] < x[i] - c)
            j++;
        // si la persona actual encaja, asigna
        if(j < b && y[j] <= x[i] + c){
            cuneta++;
            j++;
        }
    }

    cout << cuneta << "\n";
}

/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    vector<long long> x(a),y(b);
    
    for(long long i=0;i<a;i++) cin>>x[i];
    for(long long i=0;i<b;i++) cin>>y[i]; 

    sort(x.begin(),x.end());
    sort(y.begin(),y.end());


    long long count_a=a-1,cuneta=0;

    for(long long j=b-1;j>=0;j--){
        if(count_a>-1&&x[count_a] >=y[j]-c && x[count_a] <= y[j]+c ){
            cout<<x[count_a]<<" x "<<y[j]<< " y"<<"\n";
            cuneta++;
            count_a--;
        }
        else{
            bool fact = true;
            while(fact && count_a>-1 && x[count_a]>=y[j]+c){
                //cout<<x[count_a]<<" y "<<y[j]<< " x"<<"\n";
                if(count_a>-1&&x[count_a] >=y[j]-c && x[count_a] <= y[j]+c ){
                    //cout<<x[count_a]<<" y "<<y[j]<< " x"<<"\n";
                    cuneta++;
                    count_a--;
                    fact = false;

                }
                else{
                    //cout<<"not suma"<<x[count_a]<<" x "<<y[j]<< " y"<<"\n";
                    count_a--;

                }
                
                
                
            }
            

        }

    }
    cout<<cuneta;

}

*/
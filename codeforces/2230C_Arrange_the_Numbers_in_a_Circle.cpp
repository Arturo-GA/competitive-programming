#include <bits/stdc++.h>
using namespace std;

int main(){
    int multTestQ;
    cin >> multTestQ;

    while(multTestQ--){
        int n;
        cin >> n;

        vector<long long> c(n);
        for(int i = 0; i < n; i++) cin >> c[i];



        
        long long cmax = c[n-1], sum2 = 0, ones = 0;
        int blocks = 0;
        for(int i = 0; i < n; i++){
            if(c[i] == 1) ones++;
            else { sum2 += c[i]; blocks++; }
        }

        long long slots = 0;
        if(sum2 == 0){
            cout << 0 << "\n";
            continue;
        } else if(blocks == 1){
            slots = cmax / 2;
        } else {
            for(int i = 0; i < n; i++)
                if(c[i] >= 2) slots += c[i] / 2 - 1;
        }

        long long ans = sum2 + min(ones, slots);
        if(ans < 3) ans = 0;
        cout << ans << "\n";
    }

    return 0;
}


/* 


#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> x(n);
        long long suma=0,cuentNum=0,doss=0,suma2=0,unos=0;
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
            if(x[i]>2){
                suma +=x[i];
                cuentNum++;
            }
            else if(x[i]==2){
                suma2 +=x[i];
                doss++;
            }
            else if(x[i]==1){
                unos++;
            }
        }
        int sumatot=suma+suma2;

        if(suma==0&&doss==0){
            cout<<0<<"\n";
        }
        else if(suma==0&&doss>0){
            if((n==1)&&(doss==1)) cout<<0<<""<<"\n";
            if(n>1&&doss==1) cout<<3<<""<<"\n";
            if(n>1&&doss>1) cout<<(suma2)<<""<<"\n";
        }
        else if(cuentNum==1&&sumatot==3){
            cout<<sumatot+min(n-1,1)<<"\n";
        }
        else if(cuentNum==1&&sumatot>3){
            cout<<sumatot+min((suma-2)/2+1, unos)<<"\n";
        }
        else if(cuentNum+doss==n){
            cout<<suma+suma2<<"\n";
        }
        else if(sumatot>5){
            sort(x.begin(),x.end());
            for (int i = n-1; i >=0&&x[i]>3; i--)
            {
                if(x[i]==4){
                    sumatot ++;
                    unos--;
                }
                else if(unos>0){
                    sumatot += min((x[i]-4)/2+1, unos);
                    unos -= x[i]-3;
                }
            }
            cout<<sumatot<<"\n";
        }

        
    }

    return 0;
}

*/
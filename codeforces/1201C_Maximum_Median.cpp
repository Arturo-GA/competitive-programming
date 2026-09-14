/** 
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    
    int mid = n / 2;
    long long lo = a[mid], hi = a[mid] + k;
    




    while(lo < hi){
        long long m = lo + (hi - lo + 1) / 2;
        long long ops = 0;


        for(int i = mid; i < n; i++)
            if(a[i] < m) ops += m - a[i];


        if(ops <= k) lo = m;
        else hi = m - 1;
    }
    cout << lo << endl;
}



 */


#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,mid,op;
    cin>>a>>b;
    vector<long long> x(a);
    for(int i=0;i<a;i++) cin>>x[i];


    sort(x.begin(),x.end());

    
    op=0;
    long long minn=0 ,maxx=0;

    mid = a/2;
    minn=x[mid], maxx=x[mid]+b;
    int l=0;

    while(minn<maxx){
        op=0;
        l = minn+(maxx-minn+1)/2;
        for(int i=mid;i<a;i++)
            if (l-x[i]>0) op += (l-x[i]);  
        if(op>b) maxx = l-1;
        else minn=l;
    }

    
    cout<<minn;

    return 0;
}












/*

#include <bits/stdc++.h>
using namespace std;




int main(){
    long long a,b;

    cin >> a >> b;
    vector<long long> x(a);

    for(int ii=0;ii<a;ii++){
        cin>> x[ii];
        //cout << x[ii]<<"\n";
    }
    sort(x.begin(),x.end());
    

    long long i=a/2,j=0;
    //cout<<i<<" i"<<"\n";
    vector<long long> v(i+1);
    for(i; i < a;i++){
        v[j]=x[i];
        //cout<<v[j]<<" v[j]"<<"\n";
        j++;
  
    }
    long long cuenta=0;
    long long r=0;
    long long inicial=0, cambio=0;



    while(cuenta<b){
        inicial=v[0];
        //cout<<"entro? "<<"\n";

        if(a==1){
            v[0] += b;
            cuenta +=b;
        }
        for (int f=0;cuenta<b && f+1<v.size() && v[f]<=v[f+1] &&v[f]==inicial;f++){
            //cout<<v[f]<<" v[f]"<<f<<" ceeeeeeunta "<<cuenta<<"\n";
            if(v[f]<=v[f+1]&&v[f]==inicial){
                inicial = v[f];
                //cout<<v[f]<<" v[f]"<<f<<" cuuuunta "<<cuenta<<"\n";
                if(v[f+1]-v[f] >1&& v[f+1]-v[f]<= b-cuenta){
                    cambio = v[f+1]-v[f];
                    v[f] += cambio;
                    cuenta +=cambio;
                    //cout<<"entro? "<<"\n";
                }else{
                    v[f] += 1;
                    cuenta++;
                }
                
                
            }
        }

        //cout<< "SALIO? "<<"\n";

        if(v[a/2]==inicial&&cuenta<b){
            //cout<< "SALIO????????? "<<"\n";
            v[a/2] +=1;
            //cout<<v[a/2]<<" v[a/2]"<<a/2<<" c "<<cuenta<<"\n";
            cuenta++;
            //cout<<"que? "<<"\n";

        }

    }



    sort(v.begin(),v.end());

    //sort(v.begin(),v.end());
    cout<<v[0];
    return 0;
}
*/
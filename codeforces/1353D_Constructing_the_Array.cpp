#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        vector<int> x(a+1);
        priority_queue<tuple<int,int,int>> pq;
        pq.push({a,-1,a});
        int largo,r,l,mid;
        for(int i=1;i<=a;i++){
            tuple<int,int,int> seg =pq.top();
            largo=get<0>(seg);
            l = -get<1>(seg);
            r = get<2>(seg);

            pq.pop();
            
            if(largo%2==1){
                mid=(l+r)/2;
            }
            else{
                mid=(l+r-1)/2;
            }

            x[mid]=i;

            if(l+1<=mid){
                pq.push({mid-l,-l,mid-1});

            }
            if(r>=mid+1){
                pq.push({r-mid,-(mid+1),r});
            }

     
        }

        for (int j = 1; j <= a; j++)
        {
            cout<<x[j]<<" \n"[j==a];
        }
        



    }
    

    return 0;
}
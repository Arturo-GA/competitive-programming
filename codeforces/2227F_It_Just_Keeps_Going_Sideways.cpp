#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<long long> cnt(n+2, 0);
        for(int i = 0; i < n; i++) cnt[a[i]]++;
        // cnt[h] = sum_{v>=h} freq[v]  →  suffix sum
        for(int h = n; h >= 1; h--) cnt[h] += cnt[h+1];

    
        vector<long long> sum_idx(n+2, 0); // sum_idx[h] = sum of (1-indexed) cols with a[i]>=h
        for(int i = 0; i < n; i++) sum_idx[a[i]] += (i+1);
        for(int h = n; h >= 1; h--) sum_idx[h] += sum_idx[h+1];

        long long base = 0;
        for(int h = 1; h <= n; h++){
            if(cnt[h] == 0) continue;
            long long c = cnt[h];
          base += c*n - c*(c-1)/2 - sum_idx[h];
        }

        long long best_delta = 0; // no hacer nada = delta 0
        for(int i = 0; i < n; i++){
            int h = a[i];
            long long delta = cnt[h] + (i+1) - n - 1;
            best_delta = max(best_delta, delta);
        }

        cout << base + best_delta << "\n";
    }
    return 0;
}
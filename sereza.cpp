#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<long long,long long> mp;
    map<long long,long long> m;
    set<long long> s;
    long long n,m1;
    cin >> n >> m1;
    vector<long long> a;
    vector<long long> v;
    for(long long i=0; i<n; i++){
        long long z;
        cin >> z;
        a.push_back(z);
        mp[z]++;
        s.insert(z);
    }
    long long ds=s.size();
    long long c=0;
    v.push_back(ds);
    for(long long i=1; i<n; i++){
        long long num = a[i-1];
        m[num]++;
        if((mp[num]-m[num])==0){
            c++;
        }
        v.push_back(ds-c);
    }
    while(m1--){
        long long l;
        cin >> l;
        cout << v[l-1] << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a;
    for(int i=0; i<n; i++){
        long long x;
        cin >> x;
        a.push_back(x);
    }
    int start=0,End=0,c=0,d=0;
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
            start=i;
            d++;
            break;
        }
    }
    if(d==0){
        cout << "yes\n" << 1 << " " << 1 << endl;
        return 0;
    }
    for(int i=start+1; i<n; i++){
        if(a[i]>a[start]){
            End = i-1;
            break;
        }
    }
    if(End==0){
        End=n-1;
    }
    int x = n-End-1;
    reverse(a.begin()+start,a.end()-x);
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1]){
                c++;
        }
    }
    if(c>0){
        cout << "no\n";
    }else{
        cout << "yes\n" << start+1 << " " << End+1 << endl;
    }
}

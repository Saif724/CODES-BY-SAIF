#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        if(n<k)
        {
            cout << "NO\n";
            continue;
        }
        if(k==1)
        {
            cout << "YES\n" << n << "\n";
            continue;
        }
        if(n==k)
        {
            cout << "YES\n";
            for(int i=0; i<k; i++)
            {
                cout << 1;
                if(i!=k-1)
                {
                    cout << " ";
                }
            }cout << endl;
            continue;
        }
        if(n%2==0)
        {
            if(k%2==0)
            {
                cout << "YES\n";
                for(int i=0; i<k-1; i++)
                {
                    cout << 1 << " ";
                }
                long long ans = n - k+1;
                cout << ans << endl;
                continue;
            }
            long long x = n/2;
            if(x>=k)
            {
                cout << "YES\n";
                for(int i=0; i<k-1; i++)
                {
                    cout << 2 << " ";
                }
                long long ans = n - (k-1)*2;
                cout << ans << endl;
                continue;
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if(k%2==1)
            {
                cout << "YES\n";
                for(int i=0; i<k-1; i++)
                {
                    cout << 1 << " ";
                }
                long long ans = n - k+1;
                cout << ans << endl;
                continue;
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int c25=0,c50=0,c=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]==25){
            c25++;
        }else if(a[i]==50){
            if(c25!=0){
                c25--;
                c50++;
            }else{
                c++;
            }
        }else{
            if(c25!=0 and c50!=0){
                c25--;
                c50--;
            }else if(c25>=3){
                c25-=3;
            }else{
                c++;
            }
        }
    }
    if(c==0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

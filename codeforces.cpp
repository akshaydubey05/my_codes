#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll y,k,n;
    cin>>y>>k>>n;
    ll x=1;
    bool b=true;
    while((x+y)<=n){
        if((x+y)%k==0){
            cout<<x<<" ";
            b=false;
        }
        x++;
    }
    if(b==true){
        cout<<-1;
    }
}
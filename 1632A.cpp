/*

kaaa_kawai

*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <ctime>
#include <queue>
using namespace std;
long long int MOD=998244353;
long long int n,m,q,k,d,w;
long long int a[1000005],b[1000005],c[1000005],p[1000005];
long long int mi[1000004];
long long int ti[1000005],dp[1000005];
string s;
int main(){
    int T;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    while(T--)
    {
        string s;
        cin>>n;
        cin>>s;
        int cnt1=0,cnt0=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')cnt0++;
            else cnt1++;
        }
        if(cnt0>=2 || cnt1>=2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
const int N=2E5+2;
using namespace std;
int n,t,k;
int main()
{
    //freopen("nhap.inp","r",stdin);
    //freopen("nhap.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        vector<long long>sum(n+1,0);
        for(int i=0;i<n;i++){
            sum[i+1]=sum[i]+a[i];
        }
        long long maxx=0;
        for(int i=0;i<=k;i++){
            int dau=2*i;
            int cuoi= n-(k-i);
            //cout<<sum[dau]<<" "<<sum[cuoi]<<endl;
            if(dau <= cuoi ){
                long long tong=sum[cuoi]-sum[dau];
                maxx= max(tong,maxx);
                //cout<<maxx<<endl;
            }
        }
        cout<<maxx<<endl;
    }

    return 0;
}

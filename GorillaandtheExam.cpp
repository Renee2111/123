#include <bits/stdc++.h>
const int N=1E6+2;
using namespace std;

int n,t,k;
int a[N],dem[N],ts;
main()
{
    freopen("nhap.inp","r",stdin);
    freopen("nhap.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;

    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int ts=0;
        for(int i=0;i<n;){
            int j=i;
            while( j<n && a[j] == a[i])
                j++;
            dem[ts++]=j-i;
            i=j;
        }
        sort(dem,dem+ts);
        int dem1=ts;
        for(int i=0;i< ts;i++){
            if( k >= dem[i]){
                k-=dem[i];
                dem1--;
            } else break;
        }
        cout<<max(1,dem1)<<endl;
    }


}

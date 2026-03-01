#include <bits/stdc++.h>
const int N=1E6+2;
using namespace std;
int chiadoi(vector<int>&a, int dau, int cuoi){
    int tmp=a[cuoi];
    int i=dau-1;
    for(int j=dau;j < cuoi;j++){
        if(a[j] > tmp ){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[cuoi]);
    return i+1;
}
void sapxep(vector<int>&a, int dau, int cuoi){
    if(dau < cuoi ){
        int tmp=chiadoi(a,dau,cuoi);
        sapxep(a, dau,tmp-1);
        sapxep(a,tmp+1,cuoi);
    }
}
int n,sum;
main()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0;i< n;i++){
        cin>>a[i];
    }
    sapxep(a,0,a.size()-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

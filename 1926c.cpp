#include<bits/stdc++.h>
using namespace std;
const int mx=200001;
long long digsum[mx];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(long long i=1;i<=mx;i++){
        int sum=0;
        int num=i;
        while(num>0) {
            sum+=num%10;
            num/=10;
        }
        digsum[i]=digsum[i-1]+sum;
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<digsum[n]<<endl;
    }
}
#include<bits/stdc++.h>


using namespace std;

int euclidean_gcd(int a, int b)
{
    if(b == 0){
        return a;
    }

    return euclidean_gcd(b, a % b);
}

int main(){
    int n, ans, val;
    cin>>n;


    for(int i=0; i<n; i++){
        cin>>val;

        if(i == 0){
            ans = val;
        }
        if(ans == 1){
            continue;
        }
        else{
            ans = euclidean_gcd(max(ans, val), min(ans, val) );
        }
    }
    cout<<ans;
}

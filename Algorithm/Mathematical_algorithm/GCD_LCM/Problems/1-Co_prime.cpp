#include<bits/stdc++.h>


using namespace std;

int euclidean_gcd(int a, int b)
{
    if(b == 0){
        return a;
    }

    return euclidean_gcd(b, a % b);
}

bool isCoprime(int a, int b)
{
    if( a < b){
        swap(a, b);
    }
    int gcd_of_number = euclidean_gcd(a, b);

    return gcd_of_number == 1 ? true : false;
}
int main(){
    int test;
    cin>>test;

    while(test --){
        int a, b;

        cin>>a>>b;
        isCoprime(a, b) ? cout<<"Co-prime\n" : cout<<"Not Co-prime\n";
    }
}

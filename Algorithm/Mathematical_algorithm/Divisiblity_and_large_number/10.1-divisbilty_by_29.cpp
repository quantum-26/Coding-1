#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(long long num){

    while(num / 100){
        int last_digit = num % 10;
        num/= 10;
        num+= (last_digit * 3);
    }

    return (num % 29 == 0);
}

int main()
{
    long long input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

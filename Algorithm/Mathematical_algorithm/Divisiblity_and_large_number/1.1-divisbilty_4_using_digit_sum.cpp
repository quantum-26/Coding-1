#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(string input){
    long long digit_sum = 0;
    int len = input.length();

    if ( len == 0) {
        return false;
    }

    if( len == 1){
        return ( (input[0] - '0') % 4 == 0);
    }

    int num = ( ( (input[len - 2] - '0')* 10 ) + (input[len -1] - '0'));
    return ( num % 4 == 0);
}

int main()
{
    string input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

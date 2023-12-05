#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(string input){
    long long digit_sum = 0;
    int len = input.length();

    if(len == 0){
        return false;
    }

    int last_digit = (input[len-1] - '0');

    for(int i=0; i<len; i++){
        digit_sum+= (input[i] - '0');
    }

    return ( (last_digit % 2 == 0) && (digit_sum % 3 == 0) );
}

int main()
{
    string input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

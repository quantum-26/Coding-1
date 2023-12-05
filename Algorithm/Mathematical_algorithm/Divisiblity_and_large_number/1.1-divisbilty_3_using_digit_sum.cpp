#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(string input){
    long long digit_sum = 0;

    for(int i=0; i<input.length(); i++){
        digit_sum+= (input[i] - '0');
    }

    return (digit_sum % 3 == 0);
}

int main()
{
    string input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

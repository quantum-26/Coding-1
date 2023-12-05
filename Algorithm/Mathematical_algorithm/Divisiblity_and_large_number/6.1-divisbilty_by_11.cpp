#include<bits/stdc++.h>
using namespace std;

bool check_divisibility(string num){

    long long int even = 0, odd = 0;
    int n = num.length();

    for(int i=1; i<=n; i++){
        int curr_digit = (num[i-1] - '0');

        if(i & 1){
            odd+= curr_digit;
        }
        else{
            even+= curr_digit;
        }
    }

    return (abs(odd - even) % 11 == 0);
}

int main()
{
    string input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

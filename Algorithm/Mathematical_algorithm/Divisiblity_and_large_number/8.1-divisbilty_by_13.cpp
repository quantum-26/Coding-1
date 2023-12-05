#include<bits/stdc++.h>
using namespace std;


//TODO
bool check_divisibility(string num){

    if(num < 0){
        return check_divisibility(-num);
    }

    if(num == 0 || num == 7){
        return 1;
    }

    if(num < 0){
        return 0;
    }

    return check_divisibility( (num/10) - (2* (num%10)));
}

int main()
{
    string input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

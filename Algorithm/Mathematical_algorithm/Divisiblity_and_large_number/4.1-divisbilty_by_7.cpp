#include<bits/stdc++.h>
using namespace std;

int check_divisibility(int num){

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
    int input;
    cin>>input;

    check_divisibility(input) ? cout<<"yes\n" : cout<<"No\n";
}

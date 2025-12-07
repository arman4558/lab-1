#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,rev=0;
    cin>>n;
    int orginal=n;
    while(n>0){
        rev = rev*10 + n%10;
        n=n/10;

    }
    if(rev==orginal) cout<<"palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
}
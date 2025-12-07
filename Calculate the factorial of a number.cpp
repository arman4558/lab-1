#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n=5,fact=1;
    for(int i=1;i<=n; i++){
        fact = fact*i;
    }
    cout<<"Factorial = "<<fact<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a[] = {1, 5, 7, 12, 6};
    int n = 5, key = 7;

    for (int i = 0; i < n; i++){
        if(a[i] == key){
        cout<<"found";
        return 0;
        }
      }
    
    cout << "Not found";
    
}
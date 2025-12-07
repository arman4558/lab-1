#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int A[4]={3,5,7,9},B[4]={2,4,6,8},C[8];
    int i=0,j=0,k=0;
    while(i<4 && j<4){
        if(A[i]<B[j]) C[k++]= A[i++];
        else C[k++]=B[j++];
    }
    while(i<4) C[k++]=A[i++];
    while(j<4) C[k++]=A[j++];
    for(int x=0;x<8;x++)
    cout<<C[x]<<' ';
}
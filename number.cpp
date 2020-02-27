#include<bits/stdc++.h>
using namespace std ;
void prnumb(int n){
    if(n==1){
        cout<<n;
        return;
    }
    prnumb(n-1) ;
    cout<<n;
    return;
}
int main(){
    int n ;
    cin>>n ;
    prnumb(n);
    cout<<endl;

}
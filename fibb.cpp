#include<bits/stdc++.h>
using namespace std ;

int fibb(int n){
    if(n==1){
        return 0 ;
    }
    if(n==2) {
        return 1 ;
    }
    int ans = fibb(n-1)+fibb(n-2) ;
        return ans ;

    }
    
    int main(){
        int n ;
        cin>>n ;
        cout<<fibb(n)<<endl;
    }
    


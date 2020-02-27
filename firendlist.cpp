#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int dost[n] ;
    for(int i=0;i<n;i++){
        dost[i]= 0 ;
    }
    for(int i=0;i<n;i++){
        int p1 ;
        int p2 ;
        cin>>p1,p2 ;
        dost[p1]++ ;
        dost[p2]++ ;

    }
    int max=0 ;
    for(int i=0;i<n;i++){
        if(max<dost[i]){
        max = dost[i] ;
        }
    }
    for(int i=0;i<n;i++){
        if(dost[i]==max){
        cout<<i<<endl ;
        }
    }   
    return 0 ;
    }

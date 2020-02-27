#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int villages[n] ;
    int count =0 ;
    int sum[n];
    for(int i=0;i<n;i++){
        cin>>villages[i];
    }
    for(int i=0;i<n/2;i++){
        sum[count]=villages[i]+villages[(n-i)-1] ;
        count++ ;
    }
    for(int i=0;i<count;i++){
        cout<<sum[i]/10<<" "<<sum[i]%10<<endl;
    }
    return 0 ;
    }
        



     
    

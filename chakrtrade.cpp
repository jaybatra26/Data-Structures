#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    
    cin>>n ;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int max=INT_MIN ;
    int count=0 ;
    int buy = -1;
    int sell = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(max<(price[j]-price[i])){
                max =(price[j]-price[i]);
                buy = price[i] ;
                sell = price[j] ;
            }

        }
    }
    cout<<max<<" "<<buy<<" "<<sell<<endl;
    return 0 ;
}


    
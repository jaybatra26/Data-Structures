#include<bits/stdc++.h>
using namespace std ;

void swap(int first,int second,int* select){
    int temp ;
    temp=select[first] ;
    select[first]=select[second] ;
    select[second]=temp ;
}
int main(){
    int n ;
    cin>>n ;
    int select[n];

    for(int i=0;i<n;i++){
        cin>>select[n] ;
    }

    for(int i=0;i<n;i++){
        int min=i ;
        for(int j=i+1;j<n;j++){
        if(select[j]<select[min]){
        }
            min=j ;
        }
        swap(i,min,select) ;
    }
    for(int i=0;i<n;i++){
        cout<<select[i]<<endl ;
    }
    return 0 ;
}


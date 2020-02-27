#include<bits/stdc++.h>
using namespace std ;


void swap(int first,int second, int* numb){
      int temp = numb[first] ;
     numb[first] = numb[second] ;
     numb[second] = temp ;
     }


int main(){ 
    int n ;
    cin>>n ;
    int numb[n] ;
    for(int i=0;i<n;i++) {
        cin>>numb[i] ;
    }

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(numb[j]<numb[min]){
                min = j ;
            }
         }
        swap(i,min, numb);
    }
    for(int i=0;i<n;i++){
        cout<<numb[i]<<endl ;
    }
        return 0 ;
    }


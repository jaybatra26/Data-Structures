#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n;
    int numbers[n] ;
    int count=0;
    int result[n];
   
    for(int i=0;i<n;i++){
        cin>>numbers[i];
        if((numbers[i]%3)==0){
            result[count]=numbers[i];
            count++ ;

        }
    }
    if(count==0){
        cout<<"nothing"<<endl;
    }
    else {
        cout<<count<<endl ;
        for(int i=0;i<count;i++){
            cout<<result[i]<<endl;
            }
        }
    return 0 ;
}
            
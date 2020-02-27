#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    int arr[n];
    int count=0;
    int count_odd = 0 ;
    int even[n]={0};
    int odd[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2)==0 || i%2==0 ){
            even[count]=arr[i];
            count++;
        }
    }
    
    int sumeven = 0 ;
    for(int i=0;i<count;i++){
        sumeven+= even[i] ;
    }
    for(int i=0;i<n;i++){
        if((arr[i]%2)!=0||i%2!=0){
            odd[count_odd]=arr[i];
            count_odd++ ;
        }
    }
    int sumodd=0 ;
    for(int i=0;i<count_odd;i++){
        sumodd+= odd[i];
    }

    cout<<sumeven<<endl ;
    cout<<sumodd<<endl ;
    return 0;
}


    
        
        
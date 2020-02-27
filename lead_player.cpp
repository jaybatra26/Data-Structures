#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    int player1[n];
    int player2[n];
    int sum_1= 0;
    int sum_2 = 0;
    cin>>n;
     for(int i=0;i<n;i++){
        cin>>player1[i] ;
        cin>>player2[i] ;
     sum_1 += player1[i] ;
     sum_2 += player2[i] ;

     if(sum_1>sum_2){
         cout<<"player 1"<<" "<<sum_1<<endl;}
    else{
         cout<<"player 2"<<" "<<sum_2<<endl;
            }
        }
    return 0;
}


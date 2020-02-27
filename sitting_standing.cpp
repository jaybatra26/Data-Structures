#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int r,s ;
    cin>>r>>s ;
    int nos=r*s ;
    int tickets ;
    cin>>tickets ;
    if (tickets<=nos){
        cout<<tickets<<" "<<0<<endl;}
    else{
        cout<<nos<<" "<<(tickets-nos)<<endl;
    }
        return 0;
}




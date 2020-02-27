#include<bits/stdc++.h>
using namespace std ;

bool candistribute(int fruits) //doubt int 2 baar kyu aa rha hai ?
    {
    if((fruits%11)==1){
        return true;}
    else{
       return false;
        }
    }

int         main()
{
    int fruits;
    cin>>fruits ;
    int moon=0 ;

    while(!candistribute(fruits)){
        fruits=2*fruits;
        moon+=1;
    }
    cout<<moon<<" "<<fruits<<endl;
    return 0 ;
} 
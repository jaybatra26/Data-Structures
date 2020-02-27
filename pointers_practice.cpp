#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a = 10 ;
    int *p = &a ;
    int *t = p ;
    int **q = &t ;
    
    

    cout<<a<<endl ;

    int d = a ;
    d++ ;
    cout<<t<<endl ;
    cout<<q<<endl;


    return 0 ;
}
    



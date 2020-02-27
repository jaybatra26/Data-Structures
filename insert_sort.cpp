#include <bits/stdc++.h>
using namespace std;

int main()
{   int n ;
    cin>>n ;
    int num[n] ;
    for(int i=0;i<n;i++){
        cin>>num[i] ;
    }

    for (int i = 0; i < 5; i++)
    {
        int j;
        int key = num[i];
        for (j = i - 1; j >= 0 && num[j]>key; j--)
        {   
                num[j+1]=num[j];

        }
        num[j+1] = key;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
}

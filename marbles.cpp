#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    int temp_sum =0;
    for(int i=0;i<n;i++){
        temp_sum = arr[i];
        for(int j=i+1;j<n;j++){
            temp_sum = temp_sum + arr[j];
            if(temp_sum>=target){
                flag = j;
              break;
            } 
        }
        if(temp_sum==target){
            cout << "true"<< endl;
            for(int j=i; j<=flag; j++){
            cout << " " <<arr[j];
            }
            break;
        }
    }
 cout << endl;
}
#include<bits/stdc++.h>
using namespace std;

void swap(int i, int j, int* numb){
    int temp = numb[i];
    numb[i] = numb[j];
    numb[j] = temp;
}

int main(){
    int num[5] = {6,4,1,2,5};

    for(int i=0; i<5; i++){
        for(int j=0; j<5-i-1; j++){
            if(num[j]>num[j+1]){
                swap(j,j+1, num);
            }

        }
    }

    for(int i=0; i<5; i++){
        cout<<num[i]<<endl;
    }
}
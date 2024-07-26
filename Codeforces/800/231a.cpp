#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n][3];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    int count = 0;

    for(int i = 0; i<n; i++){
        int one_count = 0;
        for(int j = 0; j<3; j++){
            if(arr[i][j]==1){
                one_count++;
            }
        }
        if(one_count>=2){
            count++;
        }
    }
    cout << count;
}
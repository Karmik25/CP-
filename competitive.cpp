#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    int index, num;
    cin>>index>>num;
    for(int i=length - 1; i>=index; i--){
        if(i!=index)
            arr[i] = arr[i-1];
        else
            arr[i] = num;
    }
    for(int i=0; i<length; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void REVERSEARRAY(vector<int> &arr){
    int left=0, right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}
int main(){
    vector<int> arr={6,8,0,1,3};
    REVERSEARRAY(arr);
    
}

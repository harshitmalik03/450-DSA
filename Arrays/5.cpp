//program:5
//Move all the negative elements to one side of the array 
//without using constant extra space
#include<bits/stdc++.h>
using namespace std;
void move_negative_left(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }else if(arr[left]>0 && arr[right]<0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else if(arr[left]>0 && arr[right]>0){
            right--;
        }else{
            left++;
            right--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move_negative_left(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
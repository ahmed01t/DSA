#include<iostream>
using namespace std;
int main() {
    int target;
    int found_row=-1;
    int found_col=-1;
    int arr[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter target value"<<endl;
    cin>>target;
    int start=0;
    int end=19;//total no of elements in array rows*columns-1
    int mid;
  while (start<=end){
    mid=start+(end-start)/2;
    int row=mid/4;
    int col=mid%4;
    if(arr[row][col]==target){
        found_row=row;//use separate variables to store 
found_col=col;
  cout<<"element present at index "<<found_row<<" "<<found_col;
  break;
} 
    else if (arr[row][col]<target){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
  }
//(check if elemet is not presnt in array)
if (found_row==-1&&found_col==-1){
    cout<<"element not presnt "<<endl;
}
}
    
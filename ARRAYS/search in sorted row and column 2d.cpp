#include<iostream>
using namespace std;
int main() {
    int n;
    int m;
    int x;
    int row=-1;
    int column=-1;
    cin>>n>>m;
    cout<<"enter target"<<endl;
    cin>>x;
    int arr[n][m];
    cout<<"enter data in sorted row and column wise"<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int i=0;
    int j=m-1;
    while (i<n&&j>=0){
        if (arr[i][j]==x){
            row=i;
            column=j;
            cout<<"element present at index "<<row<<" "<<column;
            break;
        }
        else if ( arr[i][j]<x) {
i++;
        }
        else {
            j--;
        }
    }
    if (row==-1&&column==-1){
        cout<<"element not present "<<endl;
    }
}
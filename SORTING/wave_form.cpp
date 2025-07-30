#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int rows;
    int cols;
    cin>>rows>>cols;
vector<vector<int>>matrix(rows,vector<int>(cols));
for(int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        cin>>matrix[i][j];
    }
}
for (int j=0 ;j<cols;j++){
    if (j%2==0){
        for (int i=0;i<rows;i++){
            cout<<matrix[i][j]<<" ";
        }
    }
    else {
        for (int i=rows-1;i>=0;i--){
            cout<<matrix[i][j]<<" ";
        }
    }
}

}
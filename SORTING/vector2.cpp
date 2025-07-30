#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    // create 2d vector
    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    vector<vector<int>>matrix(rows,vector<int>(cols,1));
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    //size of rows and columns of vector
    cout<<"rows"<<matrix.size();
    cout<<endl;
    cout<<"columns"<<matrix[0].size();
}
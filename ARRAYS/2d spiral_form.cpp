#include<iostream>
using namespace std;
int main() {
    int rows;
    int cols;
    cin>>rows;
    cin>>cols;
    int matrix[rows][cols];
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<rows-1;i++){
        for (int j=i+1;j<cols;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<matrix[i][j];
        }
    }
}
#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    int key;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements (sorted): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter key: ";
    cin >> key;

    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            cout << "Found: " << arr[mid] << endl;
            break;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr){
    int total_sum=0;
    int n=arr.size();
    int prefix=0;
    int ans;
    for (int i=0;i<n;i++){
total_sum+=arr[i];
    }
for (int i=0;i<n-1;i++){
    prefix+=arr[i];
    ans=total_sum-prefix;
    if (ans==prefix){
        return 1;
    }
}
return 0;
}
int main() {
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  cout<<divide(v);
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
    vector<int>ans(1,1);
    int n;
cout<<"enter number "<<endl;
cin>>n;
while(n>1){
    int carry=0;
    int result=0;
    int size=ans.size();
    for (int i=0;i<size;i++){
        result=ans[i]*n+carry;
        carry=result/10;
        ans[i]=result%10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry/=10;
    }
    n--;
}
reverse(ans.begin(),ans.end());
for (int digit : ans) {
    cout << digit;
}
cout << endl;
}

 #include<iostream>
using namespace std;
int book_allocation(int arr[],int n,int m ){
    if (m>n){
        return -1;

    }
    int start=0;
    int end=0;
    int mid;
    int ans;
    for (int i=0;i<n;i++){
        start=max(start,arr[i]);
        end=end+arr[i];//sub ka sum

    }
    while (start<=end){
        mid=start+(end-start)/2;
        int pages=0,count=1;//first student ko pages de rha hain
        for (int i=0;i<n;i++){
            pages+=arr[i];
            if (pages>mid){
                count++;//first student allocated pages 
                pages=arr[i];//pages are giving to second student 
            }
        }
        if (count<=m){
        ans=mid;
        end=mid-1;
    }
    else {
        start=mid+1;
    }
}
return ans;
}

int main(){
    int arr[1000];
    int k;
    int n;
    int m;
    cout<<"enter array size";
    cin>>k;
    for (int i=0;i<k;i++){
        cin>>arr[i];
    }
    cout<<"enter number of books"<<endl;
    cin>>n;
    cout<<"enter no of people"<<endl;
    cin>>m;
cout<<book_allocation(arr,n,m);
}
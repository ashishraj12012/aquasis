#include<iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++) {
        if(arr[i]==0) {
            arr[i]=arr[i-1];
            arr[i-1]=0;
        }
    }
    for(i=0;i<n;i++)
        cout<<arr[i];
    return 0;
}

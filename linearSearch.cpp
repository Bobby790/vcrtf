#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int val){
    int pos= -1;
    for (int i=0;i<n;i++){
        if (arr[i] == val){
            pos=i;
            break;
        }
    }
    return pos;
}
int main(){
    int n,val;
    cout<<"Enter the size of the array\t";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the num:\t";
        cin>>arr[i];
    }
    cout<<"Enter the num you want to Search:";
    cin>>val;

    int result =linearSearch(arr,n,val);
    
    if (result!=-1){
        cout<<"Target found at index:"<<result<<endl;
    }
    else cout<<"Targe t not found"<<endl;
    
    return 0;

}
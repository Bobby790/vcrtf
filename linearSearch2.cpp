#include<iostream>
using namespace std;
int main(){
   int n,val,i;
   cout<<"Enter the Size of array: ";
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
    cout<<"Enter the num: ";
    cin>>arr[i];
   }
   n+=1;
   cout<<"Enter the Search Elemnent: ";
   cin>>val;
   arr[n] = val;
   for (i=0;i<n;i++){
        if (arr[i] == arr[n]){
            cout<<"Element found at index:"<<i<<endl;
            break;
        }
    }
    if (i==n) cout<<"Not Found!!!";

}

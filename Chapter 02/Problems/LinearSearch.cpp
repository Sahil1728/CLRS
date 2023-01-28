// Problem 2.1-4
#include<iostream>
#include<vector>
using namespace std;

// linearSearch function
int linearSearch(vector<int> arr,int key){
    for(int i=0;i<arr.size();i++){
        // element found in array => return index
        if (arr[i]==key){
            return i;
        }
    }
    // element not found in array => return -1
    return -1;
}


int main(){
    // size of array
    cout<<"Enter size of array: ";
    int n;cin>>n;
    // array declaration
    vector<int> arr;
    cout<<"Enter the elements of the array:"<<endl;
    // taking array input
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    // element to search for
    cout<<"Enter the element to search for: ";
    int key;cin>>key;
    int i=linearSearch(arr, key);
    if(i==-1){
        cout<<endl<<key<<" is not present in array"<<endl;
    }
    else{
        cout<<endl<<key<<" is present at position "<<i+1<<" in array"<<endl;
    }
    return 0;
}
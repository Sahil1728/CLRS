// Implementation of the insertion sort algorithm.
#include<iostream>
#include<vector>
using namespace std;

void insertionSortAscending(vector<int> &arr){
    int i=1, n=arr.size();
    // We consider that that array upto [:i) is sorted
    for(i;i<n;i++){
        int key=arr[i];
        // inserting the key in the sorted subarray to its left
        int j=i-1;
        while(j>=0 && arr[j]>key){
            // shifting greater elements one step right
            arr[j+1]=arr[j];
            j--;
        }
        // inserting key at the its designated position in the sorted subarray
        arr[j+1]=key;
    }
}

void insertionSortDescending(vector<int> &arr){
    int i=1, n=arr.size();
    // We consider that that array upto [:i) is sorted
    for(i;i<n;i++){
        int key=arr[i];
        // inserting the key in the sorted subarray to its left
        int j=i-1;
        while(j>=0 && arr[j]<key){
            // shifting greater elements one step right
            arr[j+1]=arr[j];
            j--;
        }
        // inserting key at the its designated position in the sorted subarray
        arr[j+1]=key;
    }
}


// main function
int main(){
    // taking the array as input in form of vector
    cout<<"Enter the size of the array:";
    int n;cin>>n;
    // declaration of vector
    vector<int> arr;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    cout<<"Array before sorting:"<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    // sorting in ascending order
    insertionSortAscending(arr);
    cout<<endl<<"Array after sorting in ascending order:"<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    // sorting in descending order
    insertionSortDescending(arr);
    cout<<endl<<"Array after sorting in descending order:"<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}
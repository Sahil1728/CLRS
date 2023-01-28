// Problem 2.1-5
#include<iostream>
#include<vector>
using namespace std;


// function to add two binary numbers
vector<int> binarySum(vector<int> binary1, vector<int> binary2, int size){
    // sum array
    vector<int> sum(size+1);
    // carry
    int carry = 0;
    // adding the binary numbers
    for(int i=size-1; i>=0; i--){
        sum[i+1] = (binary1[i] + binary2[i] + carry) % 2;
        carry = (binary1[i] + binary2[i] + carry) / 2;
    }
    sum[0] = carry;
    return sum;
}


int main(){
    // size of the binary number arrays
    cout<<"Enter the size of the binary number arrays: ";
    int size;
    cin>>size;
    // binary number arrays
    vector<int> binary1(size);
    vector<int> binary2(size);
    cout<<"Enter the first binary number: ";
    for(int i=0; i<size; i++){
        cin>>binary1[i];
    }
    cout<<"Enter the second binary number: ";
    for(int i=0; i<size; i++){
        cin>>binary2[i];
    }
    // printing the binary numbers
    cout<<"The first binary number is: ";
    for(int i=0; i<size; i++){
        cout<<binary1[i];
    }
    cout<<endl;
    cout<<"The second binary number is: ";
    for(int i=0; i<size; i++){
        cout<<binary2[i];
    }
    cout<<endl;
    // adding the binary numbers
    vector<int> sum;
    sum = binarySum(binary1, binary2, size);
    // printing the sum
    cout<<"The sum of the binary numbers is: ";
    for(int i=0; i<size+1; i++){
        cout<<sum[i];
    }
    cout<<endl;
}
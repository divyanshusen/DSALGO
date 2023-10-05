#include <iostream>
#include <vector>
using namespace std;
void fun(int i, vector<int>&v,int arr[], int n ){
    if(i>=n){

        for (auto it: v)
        {   
            
            cout<<it;
        //   cout<<"}"<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    fun(i+1,v,arr,n);
    v.pop_back();
    fun(i+1,v,arr,n);
}
int main(){
         vector<int>v;
         int arr[]={3,1,2};
        //  vector<int> int_vec{ 10, 20, 30,
        //                  40, 50, 60 };
    //      for (int elem : int_vec) {
    //     cout << elem << " ";
    // }
         fun(0,v,arr,3);
      return 0;
}

// g++: tells the computer the given command is for g++ compiler.
// -std = c++11: the compiler follows C++11 standard, you can set it to -std = c++14 or -std=c++17 based on what you want to use.
// -O2: Optimizes the code
// -Wall: shows warnings about possible errors
// programName.cpp: refers to the c++ file to be compiled
// -o programName.exe
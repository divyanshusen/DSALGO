#include <iostream>
#include <vector>
using namespace std;
void fun(int i, vector<int>&v,int arr[], int n,int &k){
    if(i>=n){
        // cout<<k<<endl;
         if(k==0){ 
        for (auto it: v)
        {   
            cout<<it<<" ";
        }
        cout<<endl;
    }
        return;
    }
     if(k==0){ 
        for (auto it: v)
        {   
            cout<<it<<"sum";
        }
        return;
     }
    v.push_back(arr[i]);
    int sum =k-arr[i];
    fun(i+1,v,arr,n,sum);
    v.pop_back();
    fun(i+1,v,arr,n,k);
}
int main(){
         vector<int>v;
         vector<vector<int>>vt;//vector of vector<int> 
         int arr[]={3,1,2,4};
         int k=5;
         fun(0,v,arr,4,k);
      return 0;
}

// g++: tells the computer the given command is for g++ compiler.
// -std = c++11: the compiler follows C++11 standard, you can set it to -std = c++14 or -std=c++17 based on what you want to use.
// -O2: Optimizes the code
// -Wall: shows warnings about possible errors
// programName.cpp: refers to the c++ file to be compiled
// -o programName.exe
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void findCom(int ind,vector<int>&ds,vector<int>&arr,vector<vector<int>>&ans,target ){
         if(ind==arr.size()){
             if(target==0){
                 ans.push_back(ds);
             }
         }
         if(arr[ind]<target){
             ds.push_back(arr[ind]);//pushing
             findCom(ind,ds,arr,ans,target-arr[ind]);//finding with arr
             ds.pop_back();//popping back since we are using reference
         }
         findCom(ind+1,ds,arr,ans,target);//  next index
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>ds;
       findCom(0,ds,candidates,ans,target);//starting from 0 index
       return ans;
    }
};
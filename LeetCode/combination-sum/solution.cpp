ds.push_back(arr[idx]);
        findCombination(idx,target-arr[idx],arr,ans,ds);
        ds.pop_back();
    if(arr[idx]<=target){
    
    //picking element
            return;
        }
                ans.push_back(ds);
            }
            if(target==0){
    void findCombination(int idx,int target,vector<int>&arr,vector<vector<int>>&ans,
    vector<int>&ds){
        if(idx==arr.size()){
public:
class Solution {
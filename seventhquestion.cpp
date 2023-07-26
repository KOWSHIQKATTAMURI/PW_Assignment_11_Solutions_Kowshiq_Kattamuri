#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    deque<int> dq;
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        if(!dq.empty() and dq.front() == i - k){
            dq.pop_front();
        }
        while(!dq.empty() and nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i >= k - 1){
            ans.push_back(nums[dq.front()]);
        }
    }
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    vector<int> ans = maxSlidingWindow(nums, k);
    for(auto it : ans){
        cout << it << " " << endl;
    }
}
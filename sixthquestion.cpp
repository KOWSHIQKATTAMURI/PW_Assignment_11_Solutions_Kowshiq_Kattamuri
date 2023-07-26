#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights){
        vector<int> lge(heights.size()), rge(heights.size());
        stack<int> l, r;
        for(int i = 0; i < heights.size(); i++){
            while(!l.empty() and heights[l.top()] >= heights[i]){
                l.pop();
            }
            if(l.empty()){
                lge[i] = 0;
            }else{
                lge[i] = l.top() + 1;
            }
            l.push(i);
        }
        for(int i = heights.size() - 1; i >= 0; i--){
            while(!r.empty() and heights[r.top()] >= heights[i]){
                r.pop();
            }
            if(r.empty()){
                rge[i] = heights.size() - 1;
            }else{
                rge[i] = r.top() - 1;
            }
            r.push(i);
        }
        int ans = 0;
        for(int i = 0; i < heights.size(); i++){
            ans = max(ans, heights[i]*(rge[i] - lge[i] + 1));
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }
    cout << largestRectangleArea(heights) << endl;
}
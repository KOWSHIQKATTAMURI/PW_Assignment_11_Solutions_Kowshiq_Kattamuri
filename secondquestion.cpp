#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
        stack<char> st;
        int i = 0, n = s.length();
        while(i < n){
            if(!st.empty() and st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
            i++;
        }
        string ans = "";
        while(!st.empty()){
            char ch = st.top();
            st.pop();
            ans.push_back(ch);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << removeDuplicates(s) << endl;
}
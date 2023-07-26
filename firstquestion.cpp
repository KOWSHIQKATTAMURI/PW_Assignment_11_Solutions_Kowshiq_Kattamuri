#include<bits/stdc++.h>
using namespace std;

string makeGood(string s){
        int i = 0;
        stack<char> kow;
        while(i < s.length()){
            if(!kow.empty() and (s[i] - 'A' == kow.top() - 'a' or s[i] - 'a' == kow.top() - 'A')){
                kow.pop();
            }else{
                kow.push(s[i]);
            }
            i++;
        }
        string ans = "";
        while(!kow.empty()){
            char ch = kow.top();
            kow.pop();
            ans.push_back(ch);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

int main(){
    string s;
    cin >> s;
    cout << makeGood(s) << endl;
}
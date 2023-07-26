#include<bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k){
    int ans = 0, target = tickets[k], n = tickets.size();
    for (int i = 0; i < n; i++) {
        ans += min(tickets[i], target - (i > k));
    }
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> tickets(n);
    for(int i = 0; i < n; i++){
        cin >> tickets[i];
    }
    cout << timeRequiredToBuy(tickets, k) << endl;
}
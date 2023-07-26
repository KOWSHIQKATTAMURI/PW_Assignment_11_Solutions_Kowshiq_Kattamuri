#include<bits/stdc++.h>
using namespace std;

class StockSpanner {
public:
    stack<pair<int, int>> s;
    StockSpanner(){
        s.push({1e5, 0});
    }
    int next(int price){
        int pos = s.top().second + 1;
        while(s.top().first <= price){
            s.pop();
        }
        int real_pos = pos - s.top().second;
        s.push({price, pos});
        return real_pos;
    }
};
#include<bits/stdc++.h>
using namespace std;

class ProductOfNumbers {
public:
    vector<int> product;
    ProductOfNumbers(){

    }
    void add(int num){
        if(num == 0){
            product.clear();
            return;
        }
        if(product.empty()){
            product.push_back(num);
        }else{
            product.push_back(product.back()*num);
        }
        return;
    }
    int getProduct(int k){
        int n = product.size();
        if(k > n){
            return 0;
        }
        if(k == n){
            return product.back();
        }
        return product.back()/product[n - k - 1];
    }
};
#include <bits/stdc++.h>
using namespace std;
int binary_search (vector <int> nums, int target){
    int left=0;
    int right= nums.size()-1;
    while ( left <= right){
        int middle= (left+right)/2;
        if (nums[middle]==target) return middle;
        else if (nums[middle] > target) left = middle + 1;
        else right = middle -1;  
    }
    return -1;
    
    }
int main (){
    return 0;
}

// code đệ quy

int bi_search (vector <int> nums, int l, int r, int t){
    if (l>r) return -1;
    int m = (l+r)/2;
    if ( nums[m]==t) return m;
    else if (nums[m]<t) return bi_search (nums, m+1, r,t);
    else return bi_search (nums, l, m-1,t);
}
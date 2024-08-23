// Input:
// - Dòng 1: số n và số x cần tìm trong dãy số
// - Dòng 2: Nhập vào một dãy số nguyên

// Output:
// - Nếu tìm thấy xuất ra vị trí tìm thấy đầu tiên
// - Ngược lại nếu không tìm thấy xuất -1

// (lưu ý: chỉ số của dãy số được tính từ 0)

// ví dụ:
// input:
// 5 3
// 2 1 3 5 7

// output:
// 2

// input:
// 5 10
// 2 1 3 5 7

// output:
// -1

#include <bits/stdc++.h>
using namespace std;
int linear_search (vector<int>nums, int target){
    for (int i=0; i < nums.size(); i ++){
        if (target == nums[i]) return i;
    }
    return -1;
}
int main (){
    vector <int> nums;
    int target;
    int n;
    cin >> n >> target;
    nums.resize(n);
    for (int i=0; i < nums.size(); i++){
        cin >> nums[i];
    }
    cout << linear_search(nums, target);

    return 0;
}

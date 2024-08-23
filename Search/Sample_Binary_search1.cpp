// Viết chương trình tìm kiếm phần tử trong mảng

// Input:
// - Dòng 1: số n và số x cần tìm trong dãy số
// - Dòng 2: Nhập vào một dãy số nguyên (đã được sắp xếp tăng dần)

// Output:
// - Nếu tìm thấy xuất ra vị trí tìm thấy đầu tiên
// - Ngược lại nếu không tìm thấy xuất -1

// (lưu ý: chỉ số của dãy số được tính từ 0)

// ví dụ:
// input:
// 5 3
// 1 2 3 4 5

// output:
// 2

// input:
// 5 10
// 1 2 3 4 5
// output:
// -1

#include <bits/stdc++.h>
using namespace std;
int bi_s (vector <int> n, int l, int r, int t){
    l = 0;
    r = n.size()-1;
    while (l<=r){
        int m= (l+r)/2;
        if (n[m]==t) return m;
        else if (n[m]<t) l= m+1;
        else r=m-1;
    }
    return -1;
}
int main (){
    vector <int> n;
    int a, t,l,r;
    cin >> a >> t;
    n.resize(a);
    for (int i=0; i<n.size(); i++){
        cin >> n[i];
    }
    cout << bi_s (n,l,r,t);

    return 0;
}

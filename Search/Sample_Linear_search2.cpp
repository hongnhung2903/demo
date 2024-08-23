// Viết chương trình tìm kiếm tuần tự

// Input:
// - Dòng 1: số n và số x cần tìm trong dãy số
// - Dòng 2: Nhập vào n số nguyên


// Output:
// - Nếu tìm thấy xuất ra tất cả vị trí tìm thấy x trong dãy
// - Ngược lại nếu không tìm thấy xuất -1

// (lưu ý: chỉ số của dãy số được tính từ 0)

#include <bits/stdc++.h>
using namespace std;
void Li_s (vector <int> n, int t){
    bool is_found = false;
    for (int i=0; i< n.size(); i++){
        if (n[i]==t){
            is_found = true;
            cout << i << " ";
        }
    } 
    if (is_found==false) {
        cout << -1;
    }
    return;
}
int main (){
    vector <int> n;
    int a,t;
    cin >> a >> t;
    n.resize(a);
    for (int i=0; i<n.size(); i++){
        cin >> n[i];
    }
    Li_s(n,t);
    return 0;
}
//SẮP XẾP CHỌN

#include <bits/stdc++.h>
using namespace std;
//khai báo 1 hàm sắp xếp chọn gồm mảng và biến
void swap (int& a, int&b){
     int t = a;
     a = b;
     b = t ;
}



void selectionsort (int a[], int n){
    for (int i = 0; i < n-1; i++ ){
        // khai báo 1 biến để lưu trữ phần tử nhỏ nhât
        int min_p= i;
        // duyệt all phần tử trong mảng
        for (int j=0; j < n; j++){
            if (a[j] < a[min_p]) min_p = j;
        }
        swap (a[i], a[min_p]);
    }
}   
int main (){
    
     int a[1000];
     int n;
     cin >> n;
     for (int i=0; i< n; i++){
        cin >> a[i];
     }
     selectionsort (a,n);
     for (int i=0; i<n; i++){
            cout << a[i];
     }
    return 0;
}






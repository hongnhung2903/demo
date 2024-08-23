//SẮP XẾP CHÈN
void insertionsort(int a[ ], int n){
    for (int i=1; i< n; i++){
        int b= i-1;
        while (b>0 && a[i] < a[b-1]) --b;
        int c = a[i];
        for (int j =i; j > b; -- j){
            a[j] = a[j-1];

        }
        a[b] = c;
    }

}
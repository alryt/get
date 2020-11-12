#include <iostream>
using namespace std;
 
int main() {
	int n, i, sum=0;
    float sa = 0;
    cin >> n;
    int a[1000];
    for( i = 0; i < n; i++){
        cin >> a[i];
    }
    for( i = 0; i < n; i++){
        sum+=a[i];
    }
    sa=float(sum) / float(n);
    for( i = 0; i < n; i++){
        if (a[i] > sa){
            cout << a[i] << " ";
        }
    }
    return 0;
    #alena tupaya bich
    #poidem est
}
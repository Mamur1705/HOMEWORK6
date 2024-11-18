#include "iostream"
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin>>arr[i][j];
        }
    }
    int t;
    cin>>t;
    for (int i = 0; i < t; i++) {
        int r, c, num;
        cin>>r>>c>>num;
        arr[r-1][c-1] = num;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//number to replace is arr2[i][3]
//arr[arr2[i][1]][arr2[i][2]]
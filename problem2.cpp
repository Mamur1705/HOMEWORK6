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
    double row_avg[m];
    for (int i = 0; i < m; i++) {
        double row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += arr[i][j];
        }
        row_avg[i]=(row_sum)/n;
    }
    double col_avg[n];
    for (int i = 0; i < n; i++) {
        double col_sum = 0;
        for (int j = 0; j < m; j++) {
            col_sum += arr[j][i];
        }
        col_avg[i]=(col_sum)/m;
    }
    bool row_check = true;
    for (int i = 1; i < m; i++) {
        if (row_avg[i] != row_avg[0]) {
            row_check = false;
            break;
        }
    }
    bool col_check = true;
    for (int j = 1; j < n; j++) {
        if (col_avg[j] != col_avg[0]) {
            col_check = false;
            break;
        }
    }
    if (row_check && col_check && row_avg[0] == col_avg[0]) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
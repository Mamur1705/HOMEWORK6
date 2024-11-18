#include <vector>

#include "iostream"
using namespace std;
int main() {
    int n;
    cout<<"n=";
    cin>>n;
    vector<int> row;
    int m;
    while (cin >> m) {
        row.push_back(m);
    }
    int not_empty = 0;
    for (int i = 0; i < row.size(); i++) {
        if (row[i] == 0 &&
           (i == 0 || row[i - 1] == 0) &&
           (i == row.size() - 1 || row[i + 1] == 0)) {
            not_empty++;
            i++;
            if (not_empty == n) {
                cout << "YES" << endl;
                return 0;
            }
           }
    }
    cout<<"NO"<<endl;
    return 0;
}
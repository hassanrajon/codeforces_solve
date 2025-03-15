#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<vector<vector<int>>, vector<vector<int>>> length(const string &x, const string &y) {
    int m = x.size();
    int n = y.size();
    vector<vector<int>> c(m + 1, vector<int>(n + 1, 0));
    vector<vector<int>> b(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (x[i - 1] == y[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = -1; 
            } else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = -2; 
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = -3; 
            }
        }
    }

    return {c, b};
}

void print_lcs(const vector<vector<int>> &b, const string &x, int i, int j) {
    if (i == 0 || j == 0) {
        return;  
    }
    if (b[i][j] == -1) { 
        print_lcs(b, x, i - 1, j - 1);
        cout << x[i - 1];
    } else if (b[i][j] == -2) {
        print_lcs(b, x, i - 1, j);
    } else {
        print_lcs(b, x, i, j - 1);
    }
}

int main() {
    string x = "ABCBDAB", y = "BDCABA";

    auto result = length(x, y);
    auto c = result.first;
    auto b = result.second;

    cout << "Longest Common Subsequence is: \n";
    print_lcs(b, x, x.size(), y.size());
    cout << endl;
    cout<<"matrix c: \n";
   for(auto it:c){
    for(auto ti:it){
        cout<<ti<<" ";
    }
    cout<<'\n';
   }
   cout<<'\n';
   cout<<"matrix b: \n";
   for(auto it:b){
    for(auto ti:it){
        cout<<ti<<" ";
    }
    cout<<'\n';
   }
    return 0;
}

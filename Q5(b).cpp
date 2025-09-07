#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;

    int tri[3][n]; 
    cout << "Enter elements (lower, main, upper diagonals):\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
            cin >> tri[i][j];

    cout << "Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << tri[1][i] << " ";
            else if (i == j + 1) cout << tri[0][i] << " ";
            else if (j == i + 1) cout << tri[2][i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}

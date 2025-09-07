#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int rows, cols, n;
    cout << "Enter rows, cols, number of non-zero elements: ";
    cin >> rows >> cols >> n;

    Term a[20], b[20];
    cout << "Enter row, col, value for each non-zero element:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i].row >> a[i].col >> a[i].val;

    int k = 0;
    for (int c = 0; c < cols; c++) {
        for (int i = 0; i < n; i++) {
            if (a[i].col == c) {
                b[k].row = a[i].col;
                b[k].col = a[i].row;
                b[k].val = a[i].val;
                k++;
            }
        }
    }

    cout << "Transpose (row col value):\n";
    for (int i = 0; i < k; i++)
        cout << b[i].row << " " << b[i].col << " " << b[i].val << endl;

    return 0;
}

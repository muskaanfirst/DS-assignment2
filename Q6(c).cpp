#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int r1, c1, n1, r2, c2, n2;
    cout << "Enter rows, cols for matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;
    Term A[20];
    cout << "Enter row col val for A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter rows, cols for matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;
    Term B[20];
    cout << "Enter row col val for B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    if (c1 != r2) {
        cout << "Multiplication not possible!\n";
        return 0;
    }

    int result[50][50] = {0};  

    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i].col == B[j].row) {
                result[A[i].row][B[j].col] += A[i].val * B[j].val;
            }
        }
    }

    
    cout << "Result matrix in triplet form (row col val):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            if (result[i][j] != 0) {
                cout << i << " " << j << " " << result[i][j] << endl;
            }
        }
    }

    return 0;
}

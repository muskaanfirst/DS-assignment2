#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() {
    int r, c, n1, n2;
    cout << "Enter rows, cols for matrices: ";
    cin >> r >> c;

    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;
    Term A[20];
    cout << "Enter row col val for A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;
    Term B[20];
    cout << "Enter row col val for B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    Term C[40];  
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (A[i].row < B[j].row || 
           (A[i].row == B[j].row && A[i].col < B[j].col)) {
            C[k++] = A[i++];
        }
        else if (B[j].row < A[i].row ||
                (B[j].row == A[i].row && B[j].col < A[i].col)) {
            C[k++] = B[j++];
        }
        else { 
            C[k].row = A[i].row;
            C[k].col = A[i].col;
            C[k].val = A[i].val + B[j].val;
            i++; j++; k++;
        }
    }
    while (i < n1) C[k++] = A[i++];
    while (j < n2) C[k++] = B[j++];

    cout << "Resultant matrix (row col val):\n";
    for (int x = 0; x < k; x++) {
        cout << C[x].row << " " << C[x].col << " " << C[x].val << endl;
    }
    return 0;
}

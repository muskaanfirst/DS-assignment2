#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;

    int sym[n*(n+1)/2]; 
    cout << "Enter elements of lower triangle:\n";
    for (int i = 0; i < n*(n+1)/2; i++) cin >> sym[i];

    cout << "Matrix:\n";
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << sym[index++] << " ";
        }
        for (int j = i+1; j < n; j++) {
            cout << sym[(j*(j+1))/2 + i] << " "; 
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int distinct = 0;

    for (int i = 0; i < n; i++) {
        bool seen = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                seen = true;
                break;
            }
        }
        if (!seen) distinct++;
    }

    cout << "Total distinct elements: " << distinct;
    return 0;
}

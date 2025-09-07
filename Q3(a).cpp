#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    int sum = n * ( n + 1 ) / 2;
    int actualSum = 0; 

    for(int i = 0; i < n - 1; i++) 
        actualSum += arr[i];

    cout << "Missing number is : " << sum - actualSum;
    return 0;
}

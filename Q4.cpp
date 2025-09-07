#include <iostream>
using namespace std;

void concatenateStrings() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    int len1 = 0;
    while (str1[len1] != '\0') len1++;

    int i = 0;
    while (str2[i] != '\0') {
        str1[len1] = str2[i];
        len1++;
        i++;
    }
    str1[len1] = '\0';

    cout << "Concatenated string: " << str1 << endl;
}

void reverseString() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = 0;
    while (str[len] != '\0') len++;

    cout << "Reversed string: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

void deleteVowels() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    cout << "String without vowels: ";
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            cout << str[i];
        }
    }
    cout << endl;
}

void sortStrings() {
    int n;
    cout << "How many strings do you want to enter? ";
    cin >> n;
    char arr[50][100], temp[100];

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (arr[i][k] != '\0' && arr[j][k] != '\0' && arr[i][k] == arr[j][k]) {
                k++;
            }
            if (arr[i][k] > arr[j][k]) {
                int m = 0;
                while (arr[i][m] != '\0') {
                    temp[m] = arr[i][m];
                    m++;
                }
                temp[m] = '\0';

                m = 0;
                while (arr[j][m] != '\0') {
                    arr[i][m] = arr[j][m];
                    m++;
                }
                arr[i][m] = '\0';

                m = 0;
                while (temp[m] != '\0') {
                    arr[j][m] = temp[m];
                    m++;
                }
                arr[j][m] = '\0';
            }
        }
    }

    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
}

void convertUpperToLower() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Lowercase character: " << (char)(ch + 32) << endl;
    else
        cout << "Not an uppercase character." << endl;
}

int main() {
    int choice;
    do {
        cout << "1. Concatenate one string to another\n";
        cout << "2. Reverse a string\n";
        cout << "3. Delete all the vowels from a string\n";
        cout << "4. Sort strings alphabetically\n";
        cout << "5. Convert uppercase to lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: concatenateStrings(); break;
            case 2: reverseString(); break;
            case 3: deleteVowels(); break;
            case 4: sortStrings(); break;
            case 5: convertUpperToLower(); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

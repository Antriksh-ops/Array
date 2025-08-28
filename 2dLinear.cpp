#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int elm;
    
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "Enter element to find: ";
    cin >> elm;

    int foundRow = -1, foundCol = -1; // store row & col separately

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == elm) {
                foundRow = i;
                foundCol = j;
                break;
            }
        }
    }

    if (foundRow != -1 && foundCol != -1) {
        cout << "Element " << elm << " found at (" << foundRow << "," << foundCol << ")" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}

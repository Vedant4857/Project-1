#include <iostream>
using namespace std;

int main() {
    int n, d, a[50], x, z;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element to delete: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            z = i;
            break;
        }
    }

    for (int i = z; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Optional: Print the array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    long a[100000], n, m;
    cin >> n >> m;
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Normalize rotations to avoid unnecessary full rotations
    m = m % n;
    
    // Rotate the array m times to the left
    while (m--) {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
    }
    
    // Output the rotated array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


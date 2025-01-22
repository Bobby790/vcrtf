#include <iostream>
using namespace std;

class LinearSearch {
public:
    int search(int arr[], int n, int val) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int n, val;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    
    cout << "Enter the number you want to search: ";
    cin >> val;

    LinearSearch ls;
    int result = ls.search(arr, n, val);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }
    
    return 0;
}

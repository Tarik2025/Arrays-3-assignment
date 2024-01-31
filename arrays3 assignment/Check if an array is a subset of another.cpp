#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a) {
    int n = a.size();
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    vector<int> a, b;
    int n, n1;

    cout << "Enter the size of 1st array: ";
    cin >> n;
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        a.push_back(q);
    }

    cout << "The array elements entered are:" << endl;
    display(a);

    cout << "Enter the size of 2nd array: ";
    cin >> n1;
    cout << "Enter the elements in the 2nd array:" << endl;
    for (int i = 0; i < n1; i++) {
        int q1;
        cin >> q1;
        b.push_back(q1);
    }

    cout << "The array elements 2nd entered are:" << endl;
    display(b);

    int count = 0;
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            count++;
        }
    }

    if (count == n1)
        cout << "b is a subset of a" << endl;
    else if (count == 0)
        cout << "a is a subset of b" << endl;
    else
        cout << "Neither is a subset of the other" << endl;

    return 0;
}

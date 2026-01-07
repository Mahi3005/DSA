// File: unordered_set_demo.cpp
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    for (int i = 0; i < 10; i++) {
        s.insert(i);
    }

    // Display elements
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;

    // Bucket info
    cout << "Total buckets: " << s.bucket_count() << endl;

    // Empty check
    if (s.empty()) {
        cout << "The set is empty, no elements found";
    } else {
        cout << "The set is not empty";
    }

    return 0;
}

#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    srand(time(0));
    int m = rand() % 100 + 1;
    cout << "Enter any number";
    cin >> n;
    while (true) {
        if (n == m) {
            cout << "You are correct";
            cin >> n;
        } else if (n != m) {
            cout << "Enter largest number" << endl;
            cin >> n;
        }
    }
    return 0;
}
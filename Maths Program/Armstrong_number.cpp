#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n = 153;
    int ori = n;
    int temp = n;

    int cnt = 0;
    int arm = 0;

    // Count digits
    while(temp > 0) {
        cnt++;
        temp = temp / 10;
    }

    temp = n;   // reset temp

    // Calculate Armstrong sum
    while(temp > 0) {
        int digit = temp % 10;
        arm = arm + pow(digit, cnt);
        temp = temp / 10;
    }

    if(arm == ori) {
        cout << "Armstrong number";
    } else {
        cout << "Not Armstrong";
    }

    return 0;
}

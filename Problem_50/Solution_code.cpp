#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};

int main() {
    Solution solution;
    double x = 5.0;
    int n = 5.0;
    double result = solution.myPow(x, n);
    cout << "Result: " << result << endl; // Output: Result: 3125
    return 0;
}
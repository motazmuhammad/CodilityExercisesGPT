#include <vector>
#include <cstdlib> // for abs function
using namespace std;

int solution(vector<int> &A) {
    int n = A.size();
    int sum_left = A[0];
    int sum_right = 0;
    for (int i = 1; i < n; i++) {
        sum_right += A[i];
    }
    int min_diff = abs(sum_left - sum_right);
    for (int i = 1; i < n-1; i++) {
        sum_left += A[i];
        sum_right -= A[i];
        int diff = abs(sum_left - sum_right);
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}
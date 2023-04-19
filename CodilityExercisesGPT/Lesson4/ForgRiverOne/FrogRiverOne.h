
#include <vector>
#include <unordered_set>
using namespace std;
int solution(int X, vector<int> &A) {
    unordered_set<int> positions;
    for (int i = 0; i < A.size(); i++) {
        positions.insert(A[i]);
        if (positions.size() == X) {
            return i;
        }
    }
    return -1;
}

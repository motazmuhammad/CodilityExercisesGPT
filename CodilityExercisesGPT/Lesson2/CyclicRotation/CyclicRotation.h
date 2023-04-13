#include <vector>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    int N = A.size();
    if (N == 0) {
        return A;
    }
    K = K % N; // handle case where K > N
    vector<int> result(N);
    for (int i = 0; i < N; i++) {
        result[(i + K) % N] = A[i];
    }
    return result;
}

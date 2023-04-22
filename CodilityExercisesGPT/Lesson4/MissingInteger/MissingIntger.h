int solution(vector<int> &A) {
    int N = A.size();
    vector<bool> B(N+1, false);

    for (int i = 0; i < N; i++) {
        int x = A[i];
        if (x >= 1 && x <= N+1) {
            B[x] = true;
        }
    }

    for (int i = 1; i <= N+1; i++) {
        if (!B[i]) {
            return i;
        }
    }

    return N+1;
}

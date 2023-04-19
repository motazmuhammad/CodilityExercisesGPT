int solution(vector<int> &A) {
    int N = A.size();
    vector<bool> B(N, false);

    for (int i = 0; i < N; i++) {
        int x = A[i];
        if (x < 1 || x > N || B[x-1]) {
            return 0;
        }
        B[x-1] = true;
    }

    for (int i = 0; i < N; i++) {
        if (!B[i]) {
            return 0;
        }
    }

    return 1;
}

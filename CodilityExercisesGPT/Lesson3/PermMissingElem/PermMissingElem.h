int solution(vector<int> &A) {
    int n = A.size();
    long long sum = (n+1)*(n+2)/2; // sum of integers in range [1, n+1]
    long long arr_sum = 0; // sum of integers in array A
    for (int i = 0; i < n; i++) {
        arr_sum += A[i];
    }
    return (int)(sum - arr_sum); // cast to int since result is guaranteed to be an integer
}

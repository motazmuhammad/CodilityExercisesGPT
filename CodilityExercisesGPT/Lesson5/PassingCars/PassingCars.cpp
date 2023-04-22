int solution(vector<int> &A) {
    int N = A.size();
    int count = 0;
    int west_cars = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] == 0) {
            west_cars++;
        } else {
            count += west_cars;
        }
        if (count > 1000000000) {
            return -1;
        }
    }

    return count;
}

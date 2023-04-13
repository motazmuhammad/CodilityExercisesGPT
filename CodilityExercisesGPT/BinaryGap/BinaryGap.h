

int solution(int N) {
    int current_gap_length = 0;
    int max_gap_length = 0;
    bool counting_gap = false;
    for (int i = 0; i < sizeof(N)*8; i++) { //sizeof(N) gives number of bytes in the integer type, times 8 gives number of bits
        if (N & (1 << i)) { // if the bit is 1
            if (counting_gap && current_gap_length > max_gap_length) {
                max_gap_length = current_gap_length;
            }
            counting_gap = true;
            current_gap_length = 0;
        } else { // if the bit is 0
            if (counting_gap) {
                current_gap_length++;
            }
        }
    }
    return max_gap_length;
}
#include <cmath>

int solution(int X, int Y, int D) {
    int distance = Y - X;
    int jumps = ceil((double)distance / D);
    return jumps;
}

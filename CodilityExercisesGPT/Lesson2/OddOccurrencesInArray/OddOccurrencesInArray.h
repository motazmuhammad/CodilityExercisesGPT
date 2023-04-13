#include <unordered_map>
#include <vector>

using namespace std;


int solution(vector<int> &A) {
   unordered_map<int, int> countMap;

   // Count the occurrence of each number in the array
   for (int num : A) {
      countMap[num]++;
   }

   // Find the unpaired element
   for (auto entry : countMap) {
      if (entry.second % 2 != 0) {
            return entry.first;
      }
   }

   return -1; // This should never happen
}


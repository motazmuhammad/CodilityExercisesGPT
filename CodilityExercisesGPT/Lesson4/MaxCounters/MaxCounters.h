#include <vector>

using namespace std;

vector<int> solution_wrong(int N, vector<int>& A)
   {
   vector<int> counters(N, 0);
   int maxCounter = 0;
   int lastMaxCounter = 0;
   for (int i = 0; i < A.size(); i++)
      {
      int X = A[i];
      if (X >= 1 && X <= N)
         {
         counters[X - 1]++;
         maxCounter = max(maxCounter, counters[X - 1]);
         }
      else if (X == N + 1)
         {
         lastMaxCounter = maxCounter;
         }
      }
   for (int i = 0; i < N; i++)
      {
      counters[i] = max(counters[i], lastMaxCounter);
      }
   return counters;
   }


vector<int> solution_right(int N, vector<int>& A)
   {
   vector<int> counters(N, 0); // initialize all counters to 0
   int maxCounter = 0; // current max counter value
   int lastMaxCounter = 0; // the previous max counter value
   for (int i = 0; i < A.size(); i++)
      {
      int X = A[i];
      if (X >= 1 && X <= N)
         { // increase counter X
         if (counters[X - 1] < lastMaxCounter)
            {
            counters[X - 1] = lastMaxCounter;
            }
         counters[X - 1]++; // increase counter X
         if (counters[X - 1] > maxCounter)
            {
            maxCounter = counters[X - 1]; // update max counter
            }
         }
      else if (X == N + 1)
         { // set all counters to max value
         lastMaxCounter = maxCounter;
         }
      }
   for (int i = 0; i < N; i++)
      {
      if (counters[i] < lastMaxCounter)
         {
         counters[i] = lastMaxCounter;
         }
      }
   return counters;
   }
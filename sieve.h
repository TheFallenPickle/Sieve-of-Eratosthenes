#include <cstdio>
#include <cstdlib>
#include <vector>
#include <sstream>

using namespace std;

  /*
   Sieve class uses two public peices of data
   n is the value that the program will print the prime numbers up to

   nums is a vector to track the numbers that are not prime
 */

class Sieve{
  public:
    vector <int> nums;
    int n;
};

/*
  Jeffrey Martin - Sieve of Eratosthenes
  My implmentation of a sieve to find prime numbers below n.
  Takes integer on command line, uses stringstream to read in and then executes the loop to find all the primes below that number
  Uses a class to track the data so I don't have to pass a vector/array by reference
*/

#include "sieve.h"

/*
  Procedure to mark the multiples of a value that is not prime
*/
void markMultiples(Sieve *s, int n){
  int i = 2;
  int num;
  /*
      Mark all multiples of n that are greater than n but less than s->nums.size()
  */
  while ((num = i * n) <= s->n){
    s->nums[num - 1] = 1; //index minus 1 because they start at 0
    i++;
  }
}

int main(int argc, char** argv){
  Sieve *s;
  stringstream ss;
  int i;

  //check argc val
  if(argc != 2){
    fprintf(stderr, "Usage: Sieve n\n");
    exit(1);
  }

  //allocate new instance of the Sieve class
  s = new Sieve;

  ss.clear();
  ss.str(argv[1]);

  //error check that n is int
  if(!(ss >> s->n)){
    fprintf(stderr, "n must be integer\n");
    exit(1);
  }

  //no primes below 2, check val of s->n
  if(s->n < 2){
    printf("No primes below 2\n");
    return 0;
  }

  /*
    resize the vector in the Sieve class to the size of n, set all vals to 0
  */

/*
  Loop maintains following rules:
    1. s->nums[i] == 0 means i+1 is prime
    2. s->nums[i] == 1 means i+1 is not prime
*/

  for(i = 1; i < s->n; i++){
    if(s->nums[i] == 0){
      printf("%d\n", i + 1);
      markMultiples(s, i + 1);
    }
  }
}

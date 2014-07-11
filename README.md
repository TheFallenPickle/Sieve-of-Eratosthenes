Sieve-of-Eratosthenes
=====================

My implementation of a simple sieve to find prime numbers

Takes the number to find primes less than or equal to on command line

Vector vs Array implmentation:

Vector result - three trials at 100000000 elements:

Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './sieve 100000000' > /dev/null

real	0m5.150s
user	0m5.017s
sys	0m0.127s
Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './sieve 100000000' > /dev/null

real	0m5.218s
user	0m5.077s
sys	0m0.130s
Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './sieve 100000000' > /dev/null

real	0m5.193s
user	0m5.064s
sys	0m0.125s

Array Results - Three trials 100000000 elements:

Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './array 100000000' > /dev/null

real	0m4.274s
user	0m4.135s
sys	0m0.133s
Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './array 100000000' > /dev/null

real	0m4.239s
user	0m4.108s
sys	0m0.127s
Jeffreys-MacBook-Pro:sieve jeffreymartin$ time sh -c './array 100000000' > /dev/null

real	0m4.429s
user	0m4.297s
sys	0m0.128s


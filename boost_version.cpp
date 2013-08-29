/**
 * Dummy script to check boost version
 * David Marquez-Gamez
 * IRT Jules Verne
 */

#include <boost/version.hpp>
#include <cstdio>

int main() {
  printf("Using Boost : %s \n", BOOST_LIB_VERSION);
  return 0;
}


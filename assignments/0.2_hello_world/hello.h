#include <utility> //pair
#ifndef HELLO_H
#define HELLO_H

using namespace std;

void hello(const char argv[], int repetitions);

pair<const char*, int> parse_args(int argc, char* argv[]);

#endif
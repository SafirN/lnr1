#include <utility> //pair
#include "hello.h"

using namespace std;

int main (int argc, char* argv[]) {
  	pair<const char *, int> p = parse_args (argc, argv);

  	if (p.second != -1) {
    	hello(p.first, p.second);
  	} else {
  		return -1;
  	}
  	return 0;
}

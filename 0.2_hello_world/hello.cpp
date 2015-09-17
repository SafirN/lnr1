#include <iostream> //cout
#include <cstdlib>	//atoi
#include <utility>	//pair
#include <cstring> 	//strcomp
#include "hello.h"

using namespace std;

/*
 *	Function parse_args parses input in order to call function hello with the right values.
 * 	@return: Returns a pair with values depending on input.
 */
pair<const char *, int> parse_args (int argc, char * argv[]) {
	if(argc == 1) {
		return make_pair("world", 1);
	} else if(argc == 2) {
		return make_pair(argv[1], 1);
	} else if(argc == 3) {
		char const *zeroString = "0";
		if(strcmp(argv[2], zeroString) == 0) {
			return make_pair("", 0);
		}
		if(atoi(argv[2]) > 0) {
			return make_pair(argv[1], atoi(argv[2]));
		} else {
			cerr << "2nd argument must be an integral greater than or equal to zero!" << endl; //error print, second argument has a bad value
			return make_pair("", -1);
		}
	} else {
		cerr << "Too many arguments!" << endl; //error print, too many arguments to main
		return make_pair("", -1);
	}
}

/*
 *	Function hello is called to print the hello statement. The line printed depends on the input to main.
 *	@return: Returns void.
 */
void hello(const char* text, int repetitions) {
		if (repetitions == 0) {
			return;
		}
		cout << "Hello,";
		for(int i = repetitions; i != 0; i--) {
			cout << " " << text;
		}
		cout << "!" << endl;		
}
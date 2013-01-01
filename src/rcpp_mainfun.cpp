#include<Rcpp.h>
#include<wscmd.h>

using namespace Rcpp;
using namespace webstor;
using namespace std;

int mainWrap(list<string> argv){

	//initialize the vector of character pointers
	char* aa[argv.size()];

	//copy over each string in argv
	for(int i=0; i < argv.size(); i++){
		char* c = new char[argv.front().length() + 1];
		strcpy(c, argv.front().c_str());
		aa[i] = c;
		argv.pop_front();
	}

	// call the webstor main function, passing
	// argc and argv.
	int val = main(argv.size(), aa);

	return val;
}

RCPP_MODULE(webstor){
	function("main", &mainWrap);
}
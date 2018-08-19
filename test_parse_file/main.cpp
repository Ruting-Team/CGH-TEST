#include "NFA.hpp"
#include "DFA.hpp"
#include "Parser.hpp"


using namespace std;
using namespace cgh;


#ifdef __CHAR__
#define CHAR char
#endif

#ifdef __INT__
#define CHAR int
#endif

#ifdef __STR__
#define CHAR string
#endif

// init
template<> CHAR Global<CHAR>::epsilon = 0;
ID State::counter = 0;

/**
* test construct NFA
*/
void testDump(string fileName) {
        Parser<CHAR> parser;
        NFA<CHAR>* nfa = parser.parse(fileName);
        cout<<"nfa:"<<endl;
        nfa->output();
        cout<<endl;
        delete nfa;
}


int main(int argc, char const *argv[]) {
        string fileName1 = "";
        if(argc == 2)
        {
            // test input
            fileName1 = argv[1];
            testDump(fileName1);
        }
        return 0;
}

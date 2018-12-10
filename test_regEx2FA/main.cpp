#include "NFA.hpp"
#include "DFA.hpp"
#include "RegularExp.hpp"


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
* test reg to NFA
*/
void testReg2NFA(string reg) {
        BasicRegEx<CHAR> regEx = BasicRegEx<CHAR>(reg); 
        NFA<CHAR>* nfa = regEx.mkNFA(); 
        cout<<"nfa:"<<endl;
        nfa->output();
        cout<<endl;
        delete nfa;
}


int main(int argc, char const *argv[]) {
        string reg = "";
        if(argc == 2)
        {
            // test input
            reg = argv[1];
            testReg2NFA(reg);
        }
        return 0;
}

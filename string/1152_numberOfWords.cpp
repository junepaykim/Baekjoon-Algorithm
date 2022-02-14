#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string trim(const string& s)
{
   if(s.length() == 0)
       return s;

   size_t beg = s.find_first_not_of(" \a\b\f\n\r\t\v");
   size_t end = s.find_last_not_of(" \a\b\f\n\r\t\v");
   if(beg == string::npos) // No non-spaces
       return "";

   return string(s, beg, end - beg + 1);
}

int main() {
    string input;
    getline(cin, input);
    input = trim(input);

    stringstream stst(input);
    stst.str(input);

    string v;
    int answer {0};
    while((stst >> v)) {
        answer ++;
    }

    cout << answer;
    return 0;
}
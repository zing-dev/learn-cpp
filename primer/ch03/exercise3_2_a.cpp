//
// Created by zing on 4/28/2020.
//

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
	string s;
	while (getline(cin,s))
	{
	    if (s == "q"){
            break;
	    }
		cout << s << endl;
	}
	return 0;
}
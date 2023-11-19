#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void check_block()
{
	string cf;
	cin >> cf;
	ifstream file(cf);
	string line;
	while (getline(file, line)) {
		if (line == "1") { cout << "q"; }
		else if (line == "2") { std::cout << "w"; }
		else if (line == "3") { std::cout << "e"; }
		else if (line == "4") { std::cout << "r"; }
		else if (line == "5") { std::cout << "t"; }
		else if (line == "6") { std::cout << "y"; }
		else if (line == "7") { std::cout << "u"; }
		else if (line == "8") { std::cout << "i"; }
		else if (line == "9") { std::cout << "o"; }
		else if (line == "-12") { std::cout << "p"; }
		else if (line == "11") { std::cout << "a"; }
		else if (line == "-24") { std::cout << "s"; }
		else if (line == "67") { std::cout << "d"; }
		else if (line == "234") { std::cout << "f"; }
		else if (line == "-234") { std::cout << "g"; }
		else if (line == "-93") { std::cout << "h"; }
		else if (line == "45") { std::cout << "j"; }
		else if (line == "-6") { std::cout << "k"; }
		else if (line == "-4") { std::cout << "l"; }
		else if (line == "12") { std::cout << "z"; }
		else if (line == "0") { std::cout << "x"; }
		else if (line == "-99") { std::cout << "c"; }
		else if (line == "-333") { std::cout << "v"; }
		else if (line == "-453") { std::cout << "b"; }
		else if (line == "655") { std::cout << "n"; }
		else if (line == "-123") { std::cout << "m"; }

		else if (line == "-1111") { std::cout << "0"; }
		else if (line == "2222") { std::cout << "1"; }
		else if (line == "3333") { std::cout << "2"; }
		else if (line == "4444") { std::cout << "3"; }
		else if (line == "5555") { std::cout << "4"; }
		else if (line == "6666") { std::cout << "5"; }
		else if (line == "7777") { std::cout << "6"; }
		else if (line == "8888") { std::cout << "7"; }
		else if (line == "9999") { std::cout << "8"; }
		else if (line == "1111") { std::cout << "9"; }

		else if (line == "-13") { std::cout << endl; }
		else if (line == "-46") { std::cout << " "; }
		else if (line == "`") { cout << "`"; }
		else if (line == "!") { cout << "!"; }
		else if (line == "@") { cout << "@"; }
		else if (line == "#") { cout << "#"; }
		else if (line == "$") { cout << "$"; }
		else if (line == "%") { cout << "%"; }
		else if (line == "^") { cout << "^"; }
		else if (line == "&") { cout << "&"; }
		else if (line == "*") { cout << "*"; }
		else if (line == "(") { cout << "("; }
		else if (line == ")") { cout << ")"; }
		else if (line == "-") { cout << "-"; }
		else if (line == "_") { cout << "_"; }
		else if (line == "=") { cout << "="; }
		else if (line == "+") { cout << "+"; }
		else if (line == "[") { cout << "["; }
		else if (line == "]") { cout << "]"; }
		else if (line == "{") { cout << "{"; }
		else if (line == "}") { cout << "}"; }
		else if (line == "\\"){ cout << "\\"; }
		else if (line == "|") { cout << "|"; }
		else if (line == ";") { cout << ";"; }
		else if (line == ":") { cout << ":"; }
		else if (line == "'") { cout << "'"; }
		else if (line == "\""){ cout << "\""; }
		else if (line == ",") { cout << ","; }
		else if (line == "<") { cout << "<"; }
		else if (line == ".") { cout << "."; }
		else if (line == ">") { cout << ">"; }
		else if (line == "/") { cout << "/"; }
		else if (line == "?") { cout << "?"; }
	}
	file.close();
}
int main()
{
	check_block();
	
}



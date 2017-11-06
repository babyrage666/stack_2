#include <iostream>
#include <cstring>
#include <stack.hpp>

using namespace std;

void Empty() 
{
	cout << "\nempty.cpp\n";
	Stack<char> s1(10);
	char wordchar[] = "kcats_rahc";
	for(int i = 0; i < strlen(wordchar); ++i) 
		s1.push(wordchar[i]); 
	while(!s1.empty()) 
		cout << s1.pop();
}

int main() 
{
	Empty();
	return 0;
}
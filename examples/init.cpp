#include <iostream>
#include <stack.hpp>
using namespace std;

void Init() 
{
	cout << "\ninit.cpp\n";
	Stack<int> s1;
	cout << "Int_Stack has been created\n";
}

int main() 
{
	Init();
	return 0;
}
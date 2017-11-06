#include <iostream>
#include <stack.hpp>
using namespace std;

void Pop() 
{
	cout << "\npop.cpp\n";
	Stack<int> s1(10);
	for(int i = 0; i < 10; ++i) 
		s1.push(i); 
	for(int j = 0; j < 5; ++j) 
		cout << s1.pop() << " "; 
}

int main() 
{
	Pop();
	return 0;
}

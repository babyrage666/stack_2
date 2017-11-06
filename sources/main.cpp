#include <iostream>
#include <stdexcept>
#include <stack.hpp>
using namespace std;

int main() {
	try 
	{
		cout << "Stack of Int elements (default c-tor):\n";
		Stack<int> stack_int(2);

		stack_int.push(5);
		stack_int.push(6);
		stack_int.push(3);
		stack_int.push(4);

		for(int i = 0; i < 4; ++i) 
			cout << stack_int.pop() << endl;

		cout << "Stack of char elements:\n";
		Stack<char> stack_char(6); 
    
		stack_char.push('r');
		stack_char.push('e');
		stack_char.push('l');
		stack_char.push('l');
		stack_char.push('i');
		stack_char.push('k');

		for(int i = 0; i < 6; ++i)
			cout << stack_char.pop();
	} 
	catch(const exception& e) 
	{ 
		cout << e.what() << endl;
	}
	return 0;
}


#include <iostream>
using namespace std;
#include "ArrayStack.h"

void main() {

	ArrayStack myArrayStack;

	myArrayStack.isEmpty();

	myArrayStack.Push(45);
	myArrayStack.Push(4);
	myArrayStack.Push(34);
	myArrayStack.Push(99);
	myArrayStack.Push(1200);
	//myArrayStack.Push(771);		//causes stack overflow

	myArrayStack.isEmpty();
	cout << myArrayStack.Size() << endl;

	cout << "\nTop element: " << myArrayStack.Top() << endl;

	cout << "\nRemoving top element: " << myArrayStack.Pop() << endl;

	cout << "\nCurrent top element: " << myArrayStack.Top() << endl;

	cout << myArrayStack.Size() << endl;


	getchar();

}

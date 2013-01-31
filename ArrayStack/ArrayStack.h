//Implementation of a stack using an array
#include <iostream>
using namespace std;
#include "StackExceptions.h"

const int MAX_SIZE = 5;


class ArrayStack {

private:
	int data[MAX_SIZE];
	int top;

public:

	//default ctor
	ArrayStack() {
		top = -1;
	}

	void Push(int element) {
		if(top >= MAX_SIZE) {
			throw new StackOverflowException();
		}
		cout << "\nPushing new element: " << element << endl;
		data[++top] = element;
	}

	int Pop() {
		if(top == -1) {
			throw new StackUnderflowException();
		}
		return data[top--];
	}

	int Top() {
		return data[top];
	}

	int Size() {
		cout << "\nCurrent size of stack: ";
		return top + 1;
	}

	bool isEmpty() {
		if(top == -1) {
			cout << "Stack is empty.";
			return true;
		}
		else {
			cout << "\nThere are elements on the stack.\n";
			return false;
		}
	}


};
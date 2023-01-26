#include"STACK.h"

int main()
{
	STACK myStack;
	STACKLinkedList myStackLinkedList;
	int value,Command;

	Initialize(myStack);
	Initialize(myStackLinkedList);
	
	while (true)
	{
		UnderLine();
		std::cout << "PUSH : 1 POP : 2 EXIT : 3" << std::endl;
		UnderLine();
		std::cin >> Command;

		switch (Command)
		{
			case PUSH:
				std::cout << " > PUSH " << std::endl;
				std::cout << "        > ";
				std::cin >> value;

				Push(myStack, value);
				//Push(myStackLinkedList, value);

				UnderLine();
				Print(myStack);
				//Print(myStackLinkedList);
				UnderLine();
				break;
			case POP:
				

				Pop(myStack);
				//Pop(myStackLinkedList);

				UnderLine();
				//Print(myStack);
				Print(myStackLinkedList);
				UnderLine();
				break;
			case EXIT:
				return 0;
				break;
			default:
				break;
		}
	}
}
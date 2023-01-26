#include"STACK.h"

void UnderLine()
{
	std::cout << "------------------------------------" << std::endl;
}

//�����ε� ���(�Ű������� �ٸ�)

//���Ͽ��Ḯ��Ʈ ���

void Initialize(STACKLinkedList& stack)
{
	stack.count = 0;
	stack.head = nullptr;
	stack.tail = nullptr;
}

void RealeseAll(STACKLinkedList& stack)
{
	ELEMENT* element = stack.head;

	while (element != nullptr)
	{
		ELEMENT* next = element->next;
		delete element;
		element = next;
	}

	Initialize(stack);
}

ELEMENT* Push(STACKLinkedList& stack, int value)
{
	ELEMENT* element = new ELEMENT{ value,nullptr };

	if (stack.tail == nullptr)
	{
		stack.head = element;
		stack.tail = element;
	}
	else
	{
		stack.tail->next = element;
		stack.tail = element;
	}

	return element;
}

bool Pop(STACKLinkedList& stack)
{
	ELEMENT* element = stack.head;
	ELEMENT* previous = nullptr;

	while (element != nullptr)	//previous�� ������ ����
	{
		if(element == stack.tail)
		{
			break;
		}

		previous = element;
		element = element->next;
	}
	
	if (element == nullptr) //���� ������
	{
		std::cout << "STACK is EMPTY!!" << std::endl;
		return false;
	}
	else if(stack.head == stack.tail)	//������ 1��
	{
		stack.head = stack.tail = nullptr;
	}
	else if (element == stack.tail) //pop�� �׻� ������ ���� ����
	{
		previous->next = nullptr;
		stack.tail = previous;
	}

	std::cout << " > POP  " << element->value << std::endl;
	delete element;
	return true;
}

void Print(STACKLinkedList& stack)
{
	ELEMENT* element = stack.head;

	while (element != nullptr)
	{
		std::cout << element->value << std::endl;
		element = element->next;
	}
}

//
void Initialize(STACK& stack)
{
	stack.top = nullptr;
	stack.count = 0;
}

void RealeseAll(STACK& stack)
{
	ELEMENT* element = stack.top;

	while (element != nullptr)
	{
		ELEMENT* next = element->next;
		delete element;
		element = next;
	}

	Initialize(stack);
}

void Push(STACK& stack, int value)
{
	ELEMENT* element = new ELEMENT{value,nullptr};

	element->next = stack.top;
	stack.top = element;
	stack.count++;

}

bool Pop(STACK& stack)
{
	if (stack.count == 0)
	{
		std::cout << "STACK is EMPTY!!" << std::endl;
		return false;
	}

	ELEMENT* temp = stack.top;
	stack.top = stack.top->next;
	stack.count--;

	std::cout << "POP : " << temp->value << std::endl;
	delete temp;

	return true;
}

void Print(STACK& stack)
{
	ELEMENT* temp = stack.top;
	while (temp != nullptr)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}
	
}

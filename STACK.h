#pragma once
#include<iostream>

enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};

struct ELEMENT
{
	int value;
	ELEMENT* next;
};

struct STACK
{
	int count = 0;
	ELEMENT* top = nullptr;
};

struct STACKLinkedList
{
	int count = 0;
	ELEMENT* head = nullptr;
	ELEMENT* tail = nullptr;
};


void UnderLine();

//���Ͽ��Ḯ��Ʈ ���
void Initialize(STACKLinkedList& stack);
void RealeseAll(STACKLinkedList& stack);
ELEMENT* Push(STACKLinkedList& stack, int value);
bool Pop(STACKLinkedList& stack);
void Print(STACKLinkedList& stack);

//������ ũ��(���� ����)�� ���ϱ� ���� �Ź� Ž���ϴ� ����� ������ ������ ����� ����
void Initialize(STACK& stack);
void RealeseAll(STACK& stack);
void Push(STACK& stack, int value);
bool Pop(STACK& stack);
void Print(STACK& stack);
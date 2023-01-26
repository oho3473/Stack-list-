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

//단일연결리스트 사용
void Initialize(STACKLinkedList& stack);
void RealeseAll(STACKLinkedList& stack);
ELEMENT* Push(STACKLinkedList& stack, int value);
bool Pop(STACKLinkedList& stack);
void Print(STACKLinkedList& stack);

//스택의 크기(원소 개수)를 구하기 위해 매번 탐색하는 방식을 개별의 변수로 만들고 관리
void Initialize(STACK& stack);
void RealeseAll(STACK& stack);
void Push(STACK& stack, int value);
bool Pop(STACK& stack);
void Print(STACK& stack);
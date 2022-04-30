#pragma once
#ifndef LIST_H
#define LIST_H

typedef struct List {
	char* pPlateNum;
	time_t entryTime;
	struct List* pNext;
} List;

List*initList(void); //comment for printALL initList
void deinitList(List* pRoot);
void addCar(List* pRoot, char* plateNum);
void editCar(List* pRoot, char* plateNum);
void removeCar(List* pRoot, char* plateNum); //Function to remove car from list
void printAll(List* pRoot);
int numberOfElements(List* pRoot);

#endif // !LIST_H

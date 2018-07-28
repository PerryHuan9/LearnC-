#pragma once
#include "IntSet.h"

class IntOrderSet :public IntSet {
public:
	IntOrderSet( int c, int a[], int count) :IntSet(c){
		if (a == NULL)return;
		for (int i = 0; i < count; i++)add(a[i]);
	}

	virtual int isInSet(int ele) {
		int i = elements[count / 2] > ele ? 0 : count / 2;
		for (; i < count; i++) {
			if (elements[i] == ele)return i;
			if (elements[i] > ele) break;
		}
		return -1;
	}

	virtual int add(int ele) {
		if (count >= capacity) {
			cerr << "out of capacity" << endl;
			exit(1);
		}
		int i;
		if ((i = isInSet(ele)) >= 0)return i;
		for (i=count ; i >0; i--) {
			if (elements[i - 1] <ele)break; 
				elements[i] = elements[i-1];
		}
		elements[i] = ele;
		count++;
		return i;
	}

	virtual bool remove(int ele) {
		int index;
		if ((index = isInSet(ele)) >= 0) {
			for (int i = index; i < count - 1; i++) {
				elements[i] = elements[i + 1];
			}
			count--;
			return true;
		}
		return false;
	}

	virtual int get(int index) {
		return elements[index];
	}

	virtual bool add(int arrays[], int len) {
		if (arrays != NULL) {
			for (int i = 0; i < len; i++) {
				add(arrays[i]);
			}
		}
		return false;
	}



};


#pragma once
#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H
#include <iterator>
#include <algorithm>

using namespace std;
class INSERTIONSORT {
private:
public:
	template<typename Iterator,typename Comparator>
	void insertionSort(const Iterator& a, const Iterator& b) {
		// typedef typename iterator_traits<Iterator>::value_type T;
		int i, j, n = distance(a, b);
		// T key;
		bool isBegin = false;
		Iterator p, q, t;
		for (j = 1, q = p = a, p++, t = p; j < n; j++, q = p, p++, t = p) {
			// key = *p;
			i = j - 1;
			while ((i >= 0) && Comparator()(*q,*p)) {
				//*t = *q;
				//i--, t--, q--;
				i--; 
				if (q != a)
					q--;
				else
					isBegin = true;
			}
			q++; t++;
			if (isBegin) {
				q = a; isBegin = false;
			}
				//*t = key;
				rotate(q, p, t);
		}
	}
};
#endif
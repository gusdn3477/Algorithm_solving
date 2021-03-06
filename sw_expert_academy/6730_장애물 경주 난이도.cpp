#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int rise(deque<int> deq);
int fall(deque<int> deq);

int main(void) {

	int N, M, K;
	int a, b;
	deque<int> deq;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &M);
		for (int j = 0; j < M; j++) {
			scanf("%d", &K);
			deq.push_back(K);
		}
		a = rise(deq);
		b = fall(deq);
		printf("#%d %d %d\n", i + 1, a, b);

		deq.clear();
	}

	return 0;
}

int rise(deque<int> deq) {

	int max_ = 0;
	int t;
	int t2;

	while (deq.size() >= 2) {
		t = deq.back();
		deq.pop_back();
		t2 = t - deq.back();
		max_ = max(max_, t2);
	}

	return max_;
}


int fall(deque<int> deq) {

	int max_ = 0;
	int t;
	int t2;

	while (deq.size() >= 2) {
		t = deq.front();
		deq.pop_front();
		t2 = t - deq.front();
		max_ = max(max_, t2);
	}

	return max_;
}
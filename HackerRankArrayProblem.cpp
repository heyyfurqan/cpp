// HackerRankArrayProblem.cpp : Program for solving HackerRank problem for arrays
// https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int size;
	scanf_s("%d", &size);
	int* A = new int(size);
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &A[i]);
	}
	for (int i = size; i >= 1; i--)
	{
		printf("%1d", A[i-1]);
	}
	return 0;
}

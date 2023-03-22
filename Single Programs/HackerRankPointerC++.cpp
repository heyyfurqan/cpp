// HackerRankPointerC++.cpp : Program for solution of Pointer problem on HackerRank 
// https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;


void update(int* a, int* b) {
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
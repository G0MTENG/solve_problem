/* 2023 12 19 (TUE) */
// 문제 NO.24511
// lib
#include <iostream>
#include <list>

int main () {
    int N, M;
    std::ios_base::sync_with_stdio(false);
    std::cin.tie();
    std::cout.tie();

    int i; // 반복자

    std::cin >> N;
    int * A = new int[N]; // queuestack
    int * B = new int[N]; // element
    for (i = 0; i < N; ++i)
        std::cin >> A[i];

    for (i = 0; i < N; ++i)
        std::cin >> B[i];

    std::cin >> M;
    int * C = new int[M]; // insert element
    for (i = 0; i < M; ++i)
        std::cin >> C[i];

    // formatting
    std::list<int> li;
    for (i = 0; i < N; ++i)
        if (!A[i])
            li.push_back(B[i]);

    for (i = 0; i < M; ++i)
    {
        li.push_front(C[i]);
        std::cout << li.back() << ' ';
        li.pop_back();
    }

    return 0;
}
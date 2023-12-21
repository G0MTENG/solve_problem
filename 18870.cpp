/* 2023 12 21 (목) */
// 문제 No.18870

#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    int N;
    scanf("%lld", &N);
    std::vector<long long> vec, A;

    int i; // 반복자
    long long x;
    for (i = 0; i < N; ++i) {
        scanf("%lld", &x);
        A.push_back(x);
        vec.push_back(A[i]);
    }

    sort(vec.begin(), vec.end()); // 정렬
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    for (i = 0; i < N; ++i) {
        printf("%lld ", std::lower_bound(vec.begin(), vec.end(), A[i]) - vec.begin());
    }

    return 0;
}
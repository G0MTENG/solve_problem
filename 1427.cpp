/* 2023 12 21 (목) */
// 문제 No.1427

#include <vector>
#include <iostream>
#include <algorithm>

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie();
    std::cout.tie();

    int N;
    std::cin >> N;
    std::vector<int> v;

    int x;
    while(N > 10) {
        x = N % 10;
        v.push_back(x);
        N /= 10;
    }
    v.push_back(N);

    sort(v.begin(), v.end());

    std::vector<int>::reverse_iterator rit;
    for (rit = v.rbegin(); rit != v.rend(); rit++)
        std::cout << *rit;
    printf("\n");

    return 0;
}
/* 2023 12 19 (TUE) NO.28278 */
#include <cstdio>
#include <stack>

//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

// command tool
// 1. push int
// 2. if stack is empty => return -1 / else pop & print
// 3. stack's size print
// 4. stack is empty => return 1 / else return 0
// 5. stack is empty => return -1 / else return top

int main() {
    int N;
    scanf("%d", &N);

    std::stack<int> st;
    int cmd; // 명령값
    int x;

    for (int i = 0; i < N; ++i) {
        scanf("%d", &cmd);
        switch (cmd) {
            case 1:
                scanf("%d", &x);
                st.push(x);
                break;
            case 2:
                if (st.empty())
                    printf("-1\n");
                else
                {
                    printf("%d\n", st.top());
                    st.pop();
                }
                break;
            case 3:
                printf("%d\n", st.size());
                break;
            case 4:
                if (st.empty())
                    printf("1\n");
                else
                    printf("0\n");
                break;
            case 5:
                if (st.empty())
                    printf("-1\n");
                else
                    printf("%d\n", st.top());
                break;
            default:
                return -1; // error
        }
    }

    return 0;
}
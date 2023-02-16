#include<iostream>
#include<stack>
using namespace std;
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    long long N,loop_cnt,num_new,num_old,cnt=1,num_stack,num_stack_cnt,num_same=0,num_same_cnt;
    long long sum=0;
    stack<pair<long long,long long>> stk;
    cin >> N;
    cin >> num_old;
    for (loop_cnt = 0; loop_cnt < N; loop_cnt++) {
        if (loop_cnt < N - 1) cin >> num_new;
        else num_old = num_new++;
        if (num_old == num_new) {
            cnt++;
        }
        if(num_old!=num_new||loop_cnt==N-1) {
            while (!stk.empty()) {
                num_stack = stk.top().first;
                num_stack_cnt = stk.top().second;
                if (num_old > num_stack) {
                    sum += num_stack_cnt;
                    stk.pop();
                }
                else if (num_old == num_stack) {
                    stk.pop();
                    num_same = num_stack;
                    num_same_cnt = num_stack_cnt+cnt;
                    sum -= (num_stack_cnt * (num_stack_cnt - 1) / 2);
                }
                else {
                    sum += cnt;
                    break;
                }
            }
            if (num_same) {
                stk.push({ num_same,num_same_cnt });
                sum += (num_same_cnt * (num_same_cnt - 1) / 2);
                num_same = 0;
            }
            else {
                stk.push({ num_old,cnt });
                sum += (cnt * (cnt - 1) / 2);
            }
            cnt = 1;
            num_old = num_new;
        }
    }
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;

int findMaxLessThanN(const vector<int>& A, int n) {
    string s = to_string(n);
    int L = s.size();

    // 降序排序，优先尝试大数字
    vector<int> digits = A;
    sort(digits.begin(), digits.end(), greater<int>());

    string ans;
    function<bool(int, bool)> dfs = [&](int pos, bool tight) -> bool {
        if (pos == L) {
            // 若全程 tight 为 true，说明构造的数等于 n，不合法
            return !tight;
        }
        int limit = tight ? (s[pos] - '0') : 9;
        for (int d : digits) {
            if (d > limit) continue;
            ans.push_back('0' + d);
            bool next_tight = tight && (d == limit);
            if (dfs(pos + 1, next_tight)) {
                return true;
            }
            ans.pop_back();
        }
        return false;
    };

    // 尝试构造与 n 位数相同的数
    if (dfs(0, true)) {
        return stoi(ans);
    }

    // 无法构造相同位数 → 构造少一位的最大数
    if (L == 1) {
        return -1;   // n 是个位数且无法构造
    }
    char maxDigit = '0' + digits[0];
    string fallback(L - 1, maxDigit);
    return stoi(fallback);
}

int main() {
    // 测试用例
    vector<pair<vector<int>, int>> tests = {
        {{1,2,4,9}, 2533},
        {{1}, 10},
        {{2,3}, 1},
        {{9}, 88},
        {{1,2,3}, 12},
        {{1,2,3}, 13},
        {{1,2,3}, 21},
        {{5,9}, 5544},
        {{5,9}, 5554},
    };
    vector<int> expected = {2499, 1, -1, 9, 11, 12, 13, 999,999};

    for (size_t i = 0; i < tests.size(); ++i) {
        int res = findMaxLessThanN(tests[i].first, tests[i].second);
        cout << "Test " << i+1 << ": " << res 
             << " (expected " << expected[i] << ") "
             << (res == expected[i] ? "PASS" : "FAIL") << endl;
    }
    return 0;
}
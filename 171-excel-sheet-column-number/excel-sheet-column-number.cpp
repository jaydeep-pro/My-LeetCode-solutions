class Solution {
public:
   int titleToNumber(string ct) {
    int ans = 0;
    long long int k = 1;
    for (int i = ct.size() - 1; i >= 0; i--) {
        ans += (ct[i] - 'A' + 1) * k;
        k *= 26;
    }
    return ans;
}
};
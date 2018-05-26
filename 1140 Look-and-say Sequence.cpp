1140 Look-and-say Sequence (20)（20 分）
Look-and-say sequence is a sequence of integers as the following:

D, D1, D111, D113, D11231, D112213111, ...
where D is in [0, 9] except 1. The (n+1)st number is a kind of description of the nth number. For example, the 2nd number means that there is one D in the 1st number, and hence it is D1; the 2nd number consists of one D (corresponding to D1) and one 1 (corresponding to 11), therefore the 3rd number is D111; or since the 4th number is D113, it consists of one D, two 1's, and one 3, so the next number must be D11231. This definition works for D = 1 as well. Now you are supposed to calculate the Nth number in a look-and-say sequence of a given digit D.

Input Specification:

Each input file contains one test case, which gives D (in [0, 9]) and a positive integer N (<=40), separated by a space.

Output Specification:

Print in a line the Nth number in a look-and-say sequence of D.

Sample Input:

1 8
Sample Output:

1123123111
作者: CHEN, Yue
单位: PAT联盟
时间限制: 400ms
内存限制: 64MB
代码长度限制: 16KB

#include <iostream>
using namespace std;
int main() {
    int n, k;
    string d;
    cin >> d >> n;
    for(int j = 0; j < n-1; j++) {
        string s = "";
        for(int i = 0; i < d.size(); i = k) {
            for( k = i; k < d.size() && d[k] == d[i]; k++) ;
            int t = (d[i]-'0') * 10 + k - i;
            s+=to_string(t);
        }
        d = s;
    }
    cout << d;
    return 0;
}
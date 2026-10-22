#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::sort;
int main()
{
    vector<int>nums;
    int a;
    for (int i = 0; i < 5; i++) {
        cout << "Introdueix un num aleatori:" << std::endl;
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    for (int num : nums) {
        cout << num << std::endl;
    }
}
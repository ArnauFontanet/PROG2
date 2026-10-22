#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>nums = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		nums[i] = nums[i] * 2;
	}
	cout << "Vector Final:" << std::endl;
	for (int num : nums) {
		cout << num << std::endl;
	}
}

#include<iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
	vector<string> ans;
	int index_min_sum = INT_MAX;
	unordered_map<string, int> um_list1;

	for (int i = 0; i < list1.size(); ++i)
		um_list1[list1[i]] = i;

	for (int i = 0; i < list2.size(); ++i) {
		if (um_list1.find(list2[i]) != um_list1.end()) {
			int l1_index = um_list1[list2[i]];
			if (l1_index + i < index_min_sum) {
				ans.clear();
				ans.push_back(list2[i]);
				index_min_sum = l1_index + i;
			}
			else if (l1_index + i == index_min_sum) {
				ans.push_back(list2[i]);
			}
		}
	}
	return ans;
}

int main() {
	vector<string> list1{ "Shogun","Tapioca Express","Burger King","KFC" };
	vector<string> list2{ "KFC","Burger King","Tapioca Express","Shogun" };
	findRestaurant(list1, list2);

	return 0;
}

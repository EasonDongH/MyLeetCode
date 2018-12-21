#include <bits/stdc++.h>
using namespace std;

class MyHashSet {
private:
	int size = 0;
	vector<pair<int, bool>> table;

	bool isPrime(int n) {
		for (int i = 3; i*i <= n; i += 2) {
			if (n % i == 0)
				return false;
		}
		return true;
	}

	int nextPrime(int n) {
		do {
			n += 2;
		} while (!isPrime(n));

		return n;
	}

	int hash(int key) {
		return key % table.size();
	}
public:
	/** Initialize your data structure here. */
	MyHashSet() {
		size = 0;
		table.resize(3);
	}

	void rehash() {
		vector<pair<int, bool>> old_bucket(table.begin(),table.end());
		table.clear(); table.resize(nextPrime(old_bucket.size()));
		for (int i = 0; i < int(old_bucket.size()); ++i) {
			if (old_bucket[i].second == true)
				add(old_bucket[i].first);
		}
	}

	void add(int key) {
		int index = hash(key);
		while (table[index].second == true)
			index = (index + 1) % table.size();

		if (table[index].second == false) {
			table[index] = make_pair(key, true);
			++size;
			if (2 * size >= int(table.size())) {
				rehash();
			}	
		}
	}

	void remove(int key) {
		int index = hash(key);
		while (table[index].first != key && table[index].second == true)
			index = (index + 1) % table.size();

		if (table[index].first == key) {
			table[index].second = false;
			--size;
		}
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		int index = hash(key);
		while (table[index].first != key && table[index].second == true)
			index = (index + 1) % table.size();

		return table[index].first == key && table[index].second == true;
	}
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * bool param_3 = obj.contains(key);
 */
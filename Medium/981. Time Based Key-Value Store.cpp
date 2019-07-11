#include <bits/stdc++.h>
using namespace std;

class TimeMap {
private:
	struct timemap
	{
		int time = 0;
		string value;
		bool operator <(const timemap& t)
		{
			return time > t.time;
		}
	};
	map<string, priority_queue<timemap>> m;
public:
	/** Initialize your data structure here. */
	TimeMap() {

	}

	void set(string key, string value, int timestamp) {
		auto& q = m[key];
		q.push({ timestamp, value });
	}

	string get(string key, int timestamp) {
		auto& q = m[key];
		return q.top().value;
	}
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
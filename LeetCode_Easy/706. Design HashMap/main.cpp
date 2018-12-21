#include <bits/stdc++.h>
using namespace std;

static auto makeFast = []() {
	std::ios::sync_with_stdio(false);// turn off sync
	std::cin.tie(NULL); // untie in/out streams
	return 0;
}();

class MyHashMap {
private:
	struct HashMapNode {
		int key, value;
		HashMapNode* left, *right;

		HashMapNode(int _key, int _value, HashMapNode* _left = nullptr, HashMapNode* _right = nullptr) :
			left(_left), right(_right) {
			key = _key;
			value = _value;
		}
	};

	HashMapNode *Root = nullptr, *ht = nullptr;

	HashMapNode* search(int key) {
		return search(key, Root);
	}

	void removeAt(int key) {
		//Root = removeAt(key, Root);
		removeAt(key, Root);
	}

	// HashMapNode* search(int key, HashMapNode* root) {
	//     if (root==NULL) return NULL;
	//     if (root->key==key) return root;
	//     else if (root->key > key) return search(root->left, key);
	//     else return search(root->right, key);
	// }

	//     void insert( int key, int value){
	//         Root = insert(Root, key, value);
	//     }

	//     HashMapNode* insert(HashMapNode* root, int key, int value) {
	//         if (root== NULL) 
	//             return new HashMapNode(key, value);

	//         if (root->key == key) 
	//             root->value = value;
	//         else if (root->key < key) 
	//             root->right = insert(root->right, key, value);
	//         else 
	//             root->left = insert(root->left, key, value);

	//         return root;
	//     }

		// 	HashMapNode* removeAt(int key, HashMapNode* root) {
	// 		if (root == nullptr)
	// 			return nullptr;

	// 		if (key < root->key)
	// 			root->left = removeAt(key, root->left);
	// 		else if (root->key < key)
	// 			root->right = removeAt(key, root->right);
	// 		else {
	// 			HashMapNode* tmp;
	// 			if (root->left && root->right) {
	// 				tmp = findMax(root->left);
	//                 root->key = tmp->key;
	// 				root->value = tmp->value;
	// 				root->left = removeAt(tmp->key, root->left);
	// 			}
	// 			else {
	// 				tmp = root;
	// 				if (root->left == nullptr)
	// 					root = root->right;
	// 				else if (root->right == nullptr)
	// 					root = root->left;

	// 				delete tmp;
	// 			}
	// 		}

	// 		return root;
	// 	}

	HashMapNode* search(int key, HashMapNode* root) {
		ht = nullptr;
		while (root != nullptr) {
			if (root->key < key) {
				ht = root;
				root = root->right;
			}
			else if (key < root->key) {
				ht = root;
				root = root->left;
			}
			else
				return root;
		}

		return nullptr;
	}

	void insert(int key, int value) {
		HashMapNode* tmp = search(key);
		if (tmp == nullptr) {//关键码不存在
			HashMapNode* node = new HashMapNode(key, value);
			if (ht == nullptr) {//根节点
				Root = node;
			}
			else {
				if (ht->key < key)
					ht->right = node;
				else
					ht->left = node;
			}
		}
		else
			tmp->value = value;
	}

	void removeAt(int key, HashMapNode* root) {
		HashMapNode* node = search(key);
		if (node != nullptr) {
			if (node->left == nullptr) {
				if (node == Root)
					Root = node->right;
				else
					(ht->key < node->key ? ht->right : ht->left) = node->right;
				delete node;
			}
			else if (node->right == nullptr) {
				if (node == Root)
					Root = node->left;
				else
					(ht->key < node->key ? ht->right : ht->left) = node->left;
				delete node;
			}
			else {
				HashMapNode* p = node, *succ;
				succ = findMax(node->left, p);
				node->key = succ->key; node->value = succ->value;
				(p == node ? p->left : p->right) = succ->left;
				delete succ;
			}
		}
	}

	HashMapNode* findMin(HashMapNode* root) {
		if (root != nullptr) {
			while (root->left != nullptr)
				root = root->left;
		}

		return root;
	}

	HashMapNode* findMax(HashMapNode* root) {
		if (root != nullptr) {
			while (root->right != nullptr)
				root = root->right;
		}

		return root;
	}

	HashMapNode* findMax(HashMapNode* root, HashMapNode* & ht) {
		if (root != nullptr) {
			while (root->right != nullptr) {
				ht = root;
				root = root->right;
			}
		}

		return root;
	}

public:
	/** Initialize your data structure here. */
	MyHashMap() {

	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		insert(key, value);
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {
		HashMapNode* tmp = search(key);
		if (tmp != nullptr)
			return tmp->value;
		else
			return -1;
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		removeAt(key);
	}
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */
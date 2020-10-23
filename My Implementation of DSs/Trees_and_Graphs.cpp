//////////////////////////////////////////////////////////////
////////////////////////// TREES /////////////////////////////
//////////////////////////////////////////////////////////////
class TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() {
		val = 0;
		left = nullptr;
		right = nullptr;
	}

	TreeNode(int _val) {
		val = _val;
		left = nullptr;
		right = nullptr;
	}

	TreeNode(int _val, TreeNode* _left, TreeNode* _right) {
		val = _val;
		left = _left;
		right = _right;
	}
};

// Binary Tree Traversals
void inOrderTraversal(TreeNode* node) {
	if (node != nullptr) {
		inOrderTraversal(node->left);
		visit(node);
		inOrderTraversal(node->right);
	}
}

void preOrderTraversal(TreeNode* node) {
	if (node != nullptr) {
		visit(node);
		preOrderTraversal(node->left);
		preOrderTraversal(node->right);
	}
}

void postOrderTraversal(TreeNode* node) {
	if (node != nullptr) {
		postOrderTraversal(node->left);
		postOrderTraversal(node->right);
		visit(node);
	}
}



// TODO: ADD TRIE IMPLEMENTATION

//////////////////////////////////////////////////////////////
////////////////////////// GRAPHS ////////////////////////////
//////////////////////////////////////////////////////////////
class Node { // Node but this can also represent graph
public:
	int val;
	vector<Node*> neighbors;
	vector<bool> visited; // this is just vec bool because Node values are assumed to be positive ints.
	bool marked;

	Node() {
		val = 0;
		neighbors = vector<Node*>();
		visited = vector<bool>();
		marked = false;
	}

	Node(int _val) {
		val = _val;
		neighbors = vector<Node*>();
		visited = vector<bool>();
		marked = false;
	}

	Node(int _val, vector<Node*> _neighbors) {
		val = _val;
		neighbors = _neighbors;
		visited = vector<bool>();
		marked = false;
	}

	Node(int _val, vector<Node*> _neighbors, vector<bool> _visited) {
		val = _val;
		neighbors = _neighbors;
		visited = _visited;
		marked = false;
	}

	Node(int _val, vector<Node*> _neighbors, vector<bool> _visited, bool _marked) {
		val = _val;
		neighbors = _neighbors;
		visited = _visited;
		marked = _marked;
	}
};

// Graph Traversals
void DFS(Node* root) {
	if (root == nullptr) return;
	
	// processing
	visit(root);
	// end of processing

	root->visited[root->val] = true;

	for (Node* node: root->neighbors) {
		if (node->visited[node->val] = false) {
			DFS(node);
		}
	}
}

void BFS(Node* root) {
	queue<Node*> queue;
	root->marked = true;
	queue.push(root);

	while (!queue.empty()) {
		Node* curNode = queue.front();
		queue.pop();
		
		// processing
		visit(curNode);
		// end of processing

		for (Node* node: node->neighbors) {
			if (node->marked == false) {
				node->marked = true;
				queue.push(node);
			}
		}
	}
}
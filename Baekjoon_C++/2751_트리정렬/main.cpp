#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Node {

private:
	int value;
	Node* leftChild;
	Node* rightChild;

public:
	Node(int value) {
		this->value = value;
		leftChild = NULL;
		rightChild = NULL;
	}

	int getValue();
	Node* getLeft();
	Node* getRight();
	void setLeft(Node* node);
	void setRight(Node* node);
};

class BinaryTree {

private:
	Node* rootNode;

public:
	BinaryTree() {
		rootNode = NULL;
	}

	Node* getRoot();
	void insertNode(int value);
	void inorder(Node* rootNode);
	void removeTree(Node* rootNode);
};

void treeSort(int* array, int size);

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	// 트리정렬의 최악의 시간복잡도 방지를 위해 처음에 배열을 한번 랜덤으로 섞는다.(백준 문제풀이용)
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		int r = rand() % n;
		int temp = numbers[r];
		numbers[r] = numbers[i];
		numbers[i] = temp;
	}

	treeSort(numbers, n);
	delete[] numbers;
	return 0;
}

void treeSort(int* array, int size) {
	BinaryTree BT = BinaryTree();
	for (int i = 0; i < size; i++) {
		BT.insertNode(array[i]);
	}
	BT.inorder(BT.getRoot());
	BT.removeTree(BT.getRoot());
}

int Node::getValue() {
	return this->value;
}

Node* Node::getLeft() {
	return this->leftChild;
}

Node* Node::getRight() {
	return this->rightChild;
}

void Node::setLeft(Node* node) {
	this->leftChild = node;
}

void Node::setRight(Node* node) {
	this->rightChild = node;
}

Node* BinaryTree::getRoot() {
	return this->rootNode;
}

void BinaryTree::insertNode(int value) {
	if (this->rootNode == NULL) {
		this->rootNode = new Node(value);
	}
	else {
		Node* parentNode = rootNode;
		while (true) {
			if (value < parentNode->getValue()) {
				if (parentNode->getLeft() == NULL) {
					parentNode->setLeft(new Node(value));
					break;
				}
				else {
					parentNode = parentNode->getLeft();
				}
			}
			else {
				if (parentNode->getRight() == NULL) {
					parentNode->setRight(new Node(value));
					break;
				}
				else {
					parentNode = parentNode->getRight();
				}
			}
		}
	}
}

void BinaryTree::inorder(Node* rootNode) {
	if (rootNode == NULL) {
		return;
	}
	inorder(rootNode->getLeft());
	cout << rootNode->getValue() << "\n";
	inorder(rootNode->getRight());
}

void BinaryTree::removeTree(Node* rootNode) {
	if (rootNode == NULL) {
		return;
	}
	removeTree(rootNode->getLeft());
	removeTree(rootNode->getRight());

	delete rootNode;
}
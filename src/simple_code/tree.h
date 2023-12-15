//
// Created by shecannotsee on 23-12-15.
//

#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <queue>
#include <vector>

namespace simple_code {

template <typename T>
class TreeNode {
public:
  T data;
  std::vector<TreeNode<T>*> children;

  TreeNode(const T& value) : data(value) {}

  ~TreeNode() {
    for (TreeNode<T>* child : children) {
      delete child;
    }
  }
};

template <typename T>
class Tree {
public:
  TreeNode<T>* root;

public:
  Tree() : root(nullptr) {}

  ~Tree() {
    delete root;
  }

  void addNode(const T& value, TreeNode<T>* parent = nullptr) {
    TreeNode<T>* newNode = new TreeNode<T>(value);

    if (parent == nullptr) {
      // If no parent is provided, add the node as the root
      if (root == nullptr) {
        root = newNode;
      } else {
        std::cerr << "Root node already exists." << std::endl;
        delete newNode;
      }
    } else {
      // Add the node as a child of the specified parent
      parent->children.push_back(newNode);
    }
  }

  void printTree(TreeNode<T>* node, int depth = 0) const {
    if (node == nullptr) {
      return;
    }

    for (int i = 0; i < depth; ++i) {
      std::cout << "  "; // Adjust spacing for better visualization
    }

    std::cout << node->data << std::endl;

    for (TreeNode<T>* child : node->children) {
      printTree(child, depth + 1);
    }
  }

  void printTree() const {
    printTree(root);
  }

  void printTreeShape() const {
    if (root == nullptr) {
      std::cout << "Tree is empty." << std::endl;
      return;
    }

    std::queue<TreeNode<T>*> levelQueue;
    levelQueue.push(root);

    while (!levelQueue.empty()) {
      int levelSize = levelQueue.size();

      for (int i = 0; i < levelSize; ++i) {
        TreeNode<T>* currentNode = levelQueue.front();
        levelQueue.pop();

        std::cout << currentNode->data << " ";

        for (TreeNode<T>* child : currentNode->children) {
          levelQueue.push(child);
        }
      }

      std::cout << std::endl;
    }
  }
};

} // simple_code

#endif //TREE_H

//
// Created by shecannotsee on 23-12-15.
//

#ifndef T2_TREE_H
#define T2_TREE_H

#include <simple_code/tree.h>

TEST(Tree_test, class_tree) {
  simple_code::Tree<int> myTree;

  myTree.addNode(1);  // Adding root node
  myTree.addNode(2, myTree.root);  // Adding a child to the root
  myTree.addNode(3, myTree.root);
  myTree.addNode(4, myTree.root->children[0]);  // Adding a child to the first child of the root
  myTree.addNode(5, myTree.root->children[0]);

  myTree.printTree();
  myTree.printTreeShape();

}

#endif //T2_TREE_H

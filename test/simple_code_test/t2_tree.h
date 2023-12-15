//
// Created by shecannotsee on 23-12-15.
//

#ifndef T2_TREE_H
#define T2_TREE_H

#include <simple_code/tree.h>

TEST(Tree_test, class_tree) {
  simple_code::Tree<int> myTree;

  const auto root = myTree.addNode(1);  // Adding root node
  const auto root_p1 = myTree.addNode(2, root);  // Adding a child to the root
  const auto root_p2 = myTree.addNode(3, root);
  const auto root_p1_p1 = myTree.addNode(4, root_p1);  // Adding a child to the first child of the root
  myTree.addNode(5, root_p1_p1);

  myTree.printTree();
  std::cout << "########\n";
  myTree.printTreeShape();

}

#endif //T2_TREE_H

//
// Created by shecannotsee on 23-12-15.
//

#ifndef AST_H
#define AST_H

#include <memory>
#include <vector>
#include <string>

namespace simple_code {

struct she_function {
  std::string name;
  std::vector<std::string> params;
  std::vector<she_function*> body;
};

struct node {
  she_function f;
  std::vector<node*> p;
};

struct ast {
  std::unique_ptr<node> main;
};

} // simple_code

#endif //AST_H

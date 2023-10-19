//
// Created by shecannotsee on 23-10-19.
//

#ifndef SHE_INTERPRETER_VALID_CHAR_H
#define SHE_INTERPRETER_VALID_CHAR_H

#include <tuple>
#include <vector>

struct valid_char {
  valid_char() = default;
  std::vector<std::tuple<int,int>> index;
  int tuples() const {
    return this->index.size();
  };
  void insert(int start, int end) {
    this->index.emplace_back(start,end);
  }

  static int get_start(std::vector<std::tuple<int,int>> _,int _index){
    return std::get<0>(_[_index]);
  }
  static int get_end(std::vector<std::tuple<int,int>> _,int _index){
    return std::get<1>(_[_index]);
  }
};

#endif //SHE_INTERPRETER_VALID_CHAR_H

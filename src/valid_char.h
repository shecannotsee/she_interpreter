//
// Created by shecannotsee on 23-10-19.
//

#ifndef SHE_INTERPRETER_VALID_CHAR_H
#define SHE_INTERPRETER_VALID_CHAR_H

#include <tuple>
#include <vector>

class valid_char {
 private:
  std::vector<std::tuple<int,int>> index;
 public:
  valid_char() = default;
  int tuples() const {
    return static_cast<int>(this->index.size());
  };

  void insert(int start_index, int end_index) {
    this->index.emplace_back(start_index, end_index);
  }

  static int get_start(std::vector<std::tuple<int,int>> _,int _index){
    return std::get<0>(_[_index]);
  }
  static int get_end(std::vector<std::tuple<int,int>> _,int _index){
    return std::get<1>(_[_index]);
  }
};

#endif //SHE_INTERPRETER_VALID_CHAR_H

//
// Created by shecannotsee on 23-10-19.
//

#ifndef SHE_INTERPRETER_GLOBAL_INFORMATION_H
#define SHE_INTERPRETER_GLOBAL_INFORMATION_H

#include <string>

struct global_information {
  std::string file_name = "";
  int current_number_of_line = 0;
  int total_number_of_lines = 0;
  int current_character = 0;
  void update_line() {
    total_number_of_lines++;
    current_number_of_line = 0;
    current_character = 0;
  }

};


#endif //SHE_INTERPRETER_GLOBAL_INFORMATION_H

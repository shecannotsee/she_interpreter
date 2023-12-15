//
// Created by shecannotsee on 23-12-15.
//

#ifndef GET_FROM_SOURCE_FILE_H
#define GET_FROM_SOURCE_FILE_H

#include <vector>
#include <string>

namespace simple_code {

class get_from_source_file {
 public:
  static std::vector<char> get_content(const std::string& file_path);
};

}

#endif //GET_FROM_SOURCE_FILE_H

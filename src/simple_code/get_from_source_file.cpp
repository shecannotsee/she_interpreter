//
// Created by shecannotsee on 23-12-15.
//

#include "get_from_source_file.h"

#include <cstdio>
#include <memory>

std::vector<char> simple_code::get_from_source_file::get_content(const std::string& file_path) {
  const auto file_handle = std::unique_ptr<FILE>(fopen(file_path.c_str(),"r"));
  // Check if the file was successfully opened
  if (file_handle == nullptr) {
    throw std::runtime_error("Failed to open file path:"+file_path);
  }

  std::vector<char> content;
  char c = '\0';
  while ((c = fgetc(file_handle.get())) != EOF ) {
    content.emplace_back(c);
  }
  return content;
}

//
// Created by shecannotsee on 23-12-15.
//

#ifndef T1_GET_FROM_SOURCE_FILE_H
#define T1_GET_FROM_SOURCE_FILE_H

#include <simple_code/get_from_source_file.h>

TEST(get_from_source_file,main_function) {
  auto content = simple_code::get_from_source_file::get_content("../resource/main.she");

  EXPECT_EQ(10,10);
}

#endif //T1_GET_FROM_SOURCE_FILE_H

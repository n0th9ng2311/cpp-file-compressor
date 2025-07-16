//
// Created by n0th9ng on 16-07-2025.
//

#ifndef FILE_COMP_H
#define FILE_COMP_H

#include "common.h"
namespace fs = std::filesystem;

class File_compressor{
private:
  fs::path src_path{};
  fs::path dst_path{};
public:
    File_compressor();

    void setSrc(fs::path path){
      src_path = std::move(path);
    }
    void setDst(fs::path path){
      dst_path = std::move(path);
    }

    void getSrc();
  //reason in file_comp.cpp
  //void getDst();

    void choice();



};
#endif //FILE_COMP_H

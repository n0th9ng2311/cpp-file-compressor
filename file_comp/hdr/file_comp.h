//
// Created by n0th9ng on 16-07-2025.
//

#ifndef FILE_COMP_H
#define FILE_COMP_H

#include "common.h"

enum class Type : int
{
  NO_EXIST = -1,
  TXT = 1,
  PNG = 2,
  JPG = 3,
  BMP = 4,
  TIFF = 5,
  PSD = 6,
  LOG = 7,
  CSV = 8,
  WAV = 9,
  FLAC = 10,
  AIFF = 11,
  ISO = 12,
  TAR = 13,
  VHD = 14,
};

namespace fs = std::filesystem;

class File_compressor{
private:
  fs::path m_src_path{};
  fs::path m_dst_path{};
public:
    File_compressor();

    void setSrc(fs::path path){
      m_src_path = std::move(path);
    }
    void setDst(fs::path path){
      m_dst_path = std::move(path);
    }

    fs::path getSrc_path() const {return m_src_path;}
    fs::path getDst_path() const {return m_dst_path;}


    void getSrc_user();
  //reason in file_comp.cpp
  //void getDst_user();

    void choice();

    int checkType() const;




};
#endif //FILE_COMP_H

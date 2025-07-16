cmake_minimum_required(VERSION 3.30)
project(file_comp)

set(CMAKE_CXX_STANDARD 20)

add_executable(file_comp
        src/main.cpp
        src/file_comp.cpp
        hdr/file_comp.h
        hdr/common.h
        comp_algo/aiff_/aiff_comp.cpp
        comp_algo/aiff_/aiff_comp.h
        comp_algo/bmp_/bmp_comp.cpp
        comp_algo/bmp_/bmp_comp.h
        comp_algo/csv_/csv_comp.cpp
        comp_algo/csv_/csv_comp.h
        comp_algo/flac_/flac_comp.cpp
        comp_algo/flac_/flac_comp.h
        comp_algo/iso_/iso_comp.cpp
        comp_algo/iso_/iso_comp.h
        comp_algo/jpg_/jpg_comp.cpp
        comp_algo/jpg_/jpg_comp.h
        comp_algo/log_/log_comp.cpp
        comp_algo/log_/log_comp.h
        comp_algo/png_/png_comp.cpp
        comp_algo/png_/png_comp.h
        comp_algo/psd_/psd_comp.cpp
        comp_algo/psd_/psd_comp.h
        comp_algo/tar_/tar_comp.cpp
        comp_algo/tar_/tar_comp.h
        comp_algo/tiff_/tiff_comp.cpp
        comp_algo/tiff_/tiff_comp.h
        comp_algo/txt_/txt_comp.cpp
        comp_algo/txt_/txt_comp.h
        comp_algo/vhd_/vhd_comp.cpp
        comp_algo/vhd_/vhd_comp.h
        comp_algo/wav_/wav_comp.cpp
        comp_algo/wav_/wav_comp.h)
//
// Created by JOSHI on 16-07-2025.
//
#include "../hdr/file_comp.h"
#include "../hdr/common.h"

void fixCin() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

File_compressor::File_compressor(){
  std::cout<<"A tool to compress files from terminal\n";
}

void  File_compressor::choice() {
    std::cout<<"So you want to compress some files today?\n Sure..\n";

    getSrc();
    //getDst();

}

void File_compressor::getSrc(){
   std::string src;
   std::cout<<"Enter the file name including the complete path and extension: ";

   while(true){
      std::getline(std::cin>>std::ws, src);

      fs::path temp_src {src};
      if(exists(temp_src) && fs::is_regular_file((temp_src))){
        setSrc(temp_src);
          break;
      }
      else{
        std::cerr<<"File does not exist\n";
        std::cout<<"Please enter a valid filename: \n";
      }
   }
}

//Dont really need a destination path for now, will just output the compressed file in the same dir
/*void File_compressor::getDst(){
   std::string dst;
   std::cout<<"Enter the destination: ";

   while(true){
      std::getline(std::cin>>std::ws, dst);

      fs::path temp_dst{dst};
      if(exists(temp_dst) && fs::is_regular_file((temp_dst))){
        setDst(temp_dst);
          break;
      }
      else{
        std::cerr<<"Destination does not exist\n";
        std::cout<<"Please enter a valid destination: \n";
      }
   }
}*/
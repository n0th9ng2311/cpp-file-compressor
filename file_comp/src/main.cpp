#include "../hdr/file_comp.h"

enum class Type;

int main(int argc, const char * argv[]) {

  File_compressor cr{};
  cr.choice();

  switch (static_cast<Type>(cr.checkType())) {

    case Type::TXT :
      std::cout<<".txt detected... starting compression!\n";
      //handel the case
      break;

    case Type::PNG :
      std::cout<<".png detected... starting compression!\n";
      //handel the case
        break;

    case Type::JPG :
      std::cout<<".jpg detected... starting compression!\n";
      //handel the case
        break;

    case Type::BMP :
      std::cout<<".bmp detected... starting compression!\n";
      //handel the case
        break;

    case Type::TIFF :
      std::cout<<".tiff detected... starting compression!\n";
      //handel the case
        break;

    case Type::PSD :
      std::cout<<".psd detected... starting compression!\n";
      //handel the case
        break;

    case Type::LOG :
    std::cout<<".log detected... starting compression!\n";
      //handel the case
        break;

    case Type::CSV :
      std::cout<<".csv detected... starting compression!\n";
      //handel the case
        break;

    case Type::WAV :
      std::cout<<".wav detected... starting compression!\n";
      //handel the case
        break;

    case Type::FLAC :
      std::cout<<".flac detected... starting compression!\n";
      //handel the case
        break;
    case Type::AIFF :
      std::cout<<".aiff detected... starting compression!\n";
      //handel the case
        break;

    case Type::ISO :
      std::cout<<".iso detected... starting compression!\n";
      //handel the case
        break;

    case Type::TAR :
      std::cout<<".tar detected... starting compression!\n";
      //handel the case
        break;

    case Type::VHD :
      std::cout<<".vhd detected... starting compression!\n";
      //handel the case
        break;

    case Type::NO_EXIST :
      std::cout<<"File does not exist\n";
      //handel the case
        break;

    default:
      std::cout<<"Unknown file_format\n";
        break;
  }


  return 0;

}

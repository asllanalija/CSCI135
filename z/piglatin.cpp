#include <iostream>
#include "string"

std::string piglatinfy(std::string word){
  std::string first = word.substr(0,1);
  std::string result;
  if (first =="a" || first =="e"){
    result = word + "ay";
  } else {
    result = word.substr(1,word.length()) + word.substr(0,1) + "ay";
  }
  return result;
}

int main()
{
  std::cout << piglatinfy("hello") << std::endl;
  std::cout << piglatinfy("a") << std::endl;
  return 0;
}

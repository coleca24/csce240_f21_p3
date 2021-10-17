#include <iostream>
#include "./ArrayList.cpp"

int main(int argc, char **argv) {
  ArrayList<int> a(2,1), b(3,1);
  // ------------Testing Operator!=-----------------
  std::cout << "----\nTesting operator!= \n";
  std::cout << "Your output: \n";
  bool test = (a != b); 
  std::cout << test << "\n"; 
  std::cout << "Correct output: \ntrue\n";
  
  std::cout << "----\nTesting operator!= \n";
  std::cout << "Your output: \n";
  bool test = (a != a); 
  std::cout << test << "\n"; 
  std::cout << "Correct output: \nfalse\n";
  
  
  return 0; 
}

// We need an IDE such as VS code
// We need to install the C++ extension for VS code
// We need to have a C++ compiler installed, such as g++

// #include <iostream>

// int main() {

//    auto result = (20 <=> 10) > 10;
//    std::cout << "Results: " << result << std::endl;
//    return 0;

//}

//#include <compare>
//#include <iostream>

//int main() {
//    auto result = 20 <=> 10;

//    if (result > 0) {
//        std::cout << "greater\n";
//     }
// }

#include <iostream>
using namespace std;

int main() {
  
  int myage = 25;
  char Name = 'A';
  double grade = 75.67;
  cout << "I am " << Name << ", with " << myage << " age, grade " << grade << "\n";
  cout << "Hello World! \n";
  cout << 3 * 4;
  cout << "\n";
  cout << "I am learning C++";
  cout << "\n";
  auto result = (10 <=> 20) > 0;
  cout << result << endl;
  
  double length;
  double width;
  double area;
  cout << "Type a length:" <<endl;
  cin >> length;
  cout << "type your width" << endl;
  cin >> width;
  area = width * length;
  cout << area << endl;
  return 0;
}
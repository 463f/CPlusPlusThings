#include "apple.h"
#include <iostream>

Apple::Apple(int i) : apple_number(i) {}
int Apple::add(int num) {
  take(num);
  return 0;
}
// 注释原因：模拟报错
// int Apple::add(int num) const {
//   take(num);
//   return 0;
// }
void Apple::take(int num) const {
  std::cout << "take func " << num << std::endl;
}
int Apple::getCount() const {
  take(1);
  add(1); // error
  return apple_number;
}
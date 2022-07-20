#include <iostream>
#include <vector>

struct output {
  bool found;
  int value;
  unsigned int index;
};

output linear_search(std::vector<int> &A, int value) {
  output o = {};
  o.found = false;
  for (int i = 0; i < A.size(); i++) {
    if (value == A[i]) {
      o.found = true;
      o.value = A[i];
      o.index = i;
      return o;
    }
  };
  return o;
};

int main(int argc, char *argv[]) {

  std::vector<int> vect1{10, 20, 30};
  output o = linear_search(vect1, 30);
  output no = linear_search(vect1, 99);

  std::cout << "Valid output" << std::endl;   
  std::cout << "Found: " << o.found << std::endl;
  std::cout << "Value: " << o.value << std::endl;
  std::cout << "Index: " << o.index << std::endl;

  std::cout << "Invalid output" << std::endl;   
  std::cout << "Found: " << no.found << std::endl;
  std::cout << "Value: " << no.value << std::endl;
  std::cout << "Index: " << no.index << std::endl;
  return 0;
}

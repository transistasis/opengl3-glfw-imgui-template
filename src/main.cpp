#include <iostream>
#include <glfw/glfw3.h>

int main() {
  std::cout << "Mrow :<" << std::endl;

  std::cout << "GLFW VERSION: "
            << GLFW_VERSION_MAJOR     << "."
            << GLFW_VERSION_MINOR     << "."
            << GLFW_VERSION_REVISION  << std::endl;

  return 0;
}

#include <cstdlib>
#include <string>

int main() {
    std::string filename = "test.txt";
    std::string cmd = "cat " + filename;

    system(cmd.c_str());  // convert to const char*
}

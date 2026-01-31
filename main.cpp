#include "DLList.hpp"
#include "DLList.cpp"

int main() {
    DLList<char> l;

    l.pop_front();
    l.pop_back();

    l.push_back('C');
    l.pop_front();
    l.push_front('A');
    l.pop_back();
    l.push_back('W');
    l.push_front('V');
    l.push_back('6');
    l.push_front('F');
    l.push_front('W');

    l.print_backwards();

    return 0;
}

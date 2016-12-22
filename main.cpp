#include <iostream>

bool f(bool b)
{
    if (!b) {
        return false;
    }
    return true;
}

int main()
{
    if (f(true)) {
        std::cout << "SMTH\n";
    }
	return 0;
}

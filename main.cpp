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
        std::cout << "asfdsff\n";
    }
	return 0;
}

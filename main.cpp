#include <atomic>

int main()
{
    int y{};
    std::atomic_ref<int> x(y);
}
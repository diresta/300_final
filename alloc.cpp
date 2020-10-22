#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

class SmallAllocator
{
    private:
        static constexpr int const &total_memory_size = 1048576;
        char memory[total_memory_size];
        int border = 0;
        unordered_map<void*, int> blockSizes;

    public:
        void *Alloc(unsigned int size)
        {
            if (border+size >= )
        }
}
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <type_traits>

#include "arena_alloc.h"

int main() {
	allocator<int> alloc;
	std::vector<int, allocator<int>> vec1(100, alloc);
	std::iota(vec1.begin(), vec1.end(), 0);
	std::for_each(vec1.cbegin(), vec1.cend(), [](int i) { std::cout << i << ','; });

	std::vector<int, allocator<int>> vec2(100, alloc);
	std::iota(vec2.begin(), vec2.end(), 0);
	std::for_each(vec2.cbegin(), vec2.cend(), [](int i) { std::cout << i << ','; });

	std::vector<int, allocator<int>> vec3(200, alloc);
	std::iota(vec3.begin(), vec3.end(), 0);
	std::for_each(vec3.cbegin(), vec3.cend(), [](int i) { std::cout << i << ','; });
}

#include "static_set.h"
#include <iostream>

int main()
{
	typedef static_containers::static_set<int, 1, 3, 5> myset;
	
	std::cout << static_containers::lookup<int, myset>(3) << " " << static_containers::lookup<int, myset>(7) << std::endl;
  
	return 0;
}

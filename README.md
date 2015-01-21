# experimental

---
static_set: compile-time set

Example:
	typedef static_containers::static_set<int, 2, 5, 7> ss;
	bool bRes;
	bRes = static_containers::lookup<int, ss>(3); // res = false
	bRes = static_containers::lookup<int, ss>(5); // res = true
	
In release version (MSVC), static_containers::lookup compiles just to "0" or "1".

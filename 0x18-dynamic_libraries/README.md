# C - Dynamic libraries

# #What's The Difference B/w Dynamic and Static Libraries?
* With dynamic libraries in C Programming language, the linker does not copy the object code of all the functions we need locally, instead, the address of the function in memory is added
	* Lesser file sizes
	* Our program does not need recompilation when updates are made as long as updates have been downloaded in memeroy.

* Static libraries have all object code of necessary functions and libraries copied locally during compilation.
	* Larger files (in size)
	* Needs recompilation everytime a library or function is updated

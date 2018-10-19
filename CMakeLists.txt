project(test)

add_compile_options(-std=c++17)

add_executable(TEST
	
	vector_def.h
	vector_imp.hpp
	vector.h
	
	template.h

	main.cpp
)

# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
set(CMAKE_C_COMPILER gcc)
cmake_minimum_required (VERSION 3.8)


project ("CMakeExample")
set (CMAKE_CXX_STANDARD 20)

#[[set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)]]

set (CMAKE_C_STANDARD 17)
#set(CMAKE_CXX_STANDARD 11)

# Include sub-projects.
add_subdirectory ("CMakeExample")
add_subdirectory ("1_1_ArrayList")
add_subdirectory ("1_2_LinkedList")
add_subdirectory ("1_3_Stack")
add_subdirectory ("1_4_Queue")
add_subdirectory ("1_5_Hashtable")
add_subdirectory ("2_1_BinaryTree")
add_subdirectory ("2_2_AVLTree")
add_subdirectory ("2_3_HeapTree")
add_subdirectory ("2_4_TrieTree")
add_subdirectory ("2_5_Graph")
add_subdirectory ("2_6_GraphUndirected")
add_subdirectory ("3_1_Searching")
add_subdirectory ("3_2_Sorting")
add_subdirectory ("3_3_String")



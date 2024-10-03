# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sampe2_4_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sampe2_4_autogen.dir\\ParseCache.txt"
  "sampe2_4_autogen"
  )
endif()

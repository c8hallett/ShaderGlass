#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ixwebsocket::ixwebsocket" for configuration "Debug"
set_property(TARGET ixwebsocket::ixwebsocket APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(ixwebsocket::ixwebsocket PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/ixwebsocket.lib"
  )

list(APPEND _cmake_import_check_targets ixwebsocket::ixwebsocket )
list(APPEND _cmake_import_check_files_for_ixwebsocket::ixwebsocket "${_IMPORT_PREFIX}/debug/lib/ixwebsocket.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

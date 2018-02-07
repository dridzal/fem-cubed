INCLUDE(TribitsPackageMacros)
INCLUDE(TribitsAddOptionAndDefine)

#
# A) Define the package
#
TRIBITS_PACKAGE(FEM-Cubed)
TRIBITS_ADD_EXPLICIT_INSTANTIATION_OPTION()

#
# B) Set up package-specific options
#
#TRIBITS_ADD_DEBUG_OPTION()
#TRIBITS_ADD_SHOW_DEPRECATED_WARNINGS_OPTION()

#
# C) Add the libraries, tests, and examples
#
ADD_SUBDIRECTORY(src)
TRIBITS_ADD_EXAMPLE_DIRECTORIES(example)
#TRIBITS_ADD_TEST_DIRECTORIES(test)

#
# D) Always enable Explicit Template Instantiation (ETI).
#
#TRIBITS_ADD_OPTION_AND_DEFINE(
#  ${PACKAGE_NAME}_ENABLE_EXPLICIT_INSTANTIATION
#  HAVE_${PACKAGE_NAME_UC}_EXPLICIT_INSTANTIATION
#  "Enable the use of explicit template instantiation."
#  ON
#  )

#
# E) Do standard post processing
#
TRIBITS_PACKAGE_POSTPROCESS()

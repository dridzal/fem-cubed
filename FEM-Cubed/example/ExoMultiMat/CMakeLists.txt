INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

TRIBITS_ADD_EXECUTABLE(
  ExoMultiMat
  SOURCES main.cpp
  )

TRIBITS_COPY_FILES_TO_BINARY_DIR(ExoMultiMatCopyFiles
  SOURCE_FILES
  solverAugmentation.xml solverAugmentationEpetra.xml
  solverMueLuRefMaxwell.xml solverMueLuRefMaxwell2D.xml solverMueLuRefMaxwellEpetra.xml
  solverMueLuRefMaxwellOpenMP.xml solverMueLuRefMaxwellCuda.xml
  solverAugmentationUseILU.xml
  solverMLRefMaxwell.xml
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}
  DEST_DIR ${CMAKE_CURRENT_BINARY_DIR}
  )


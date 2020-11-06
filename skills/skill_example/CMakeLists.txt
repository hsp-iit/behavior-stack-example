
add_executable(StateChartExample)
target_include_directories(StateChartExample
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)
target_sources(StateChartExample
  PRIVATE
    main.cpp
    StateChartExample.cpp
    StateChartExample.h
    StateChartExampleDataModel.cpp
    StateChartExampleDataModel.h
)

qt5_add_statecharts(STATECHARTS_FILES StateChartExampleStateMachine.scxml)
set_source_files_properties(${CMAKE_CURRENT_BINARY_DIR}/StateChartExampleStateMachine.cpp PROPERTIES SKIP_AUTOMOC TRUE)


target_sources(StateChartExample
  PRIVATE
    ${STATECHARTS_FILES})

target_link_libraries(StateChartExample
  PRIVATE
    Qt5::Scxml
)

cmake_minimum_required(VERSION 3.0.0)
project(horaMilitar VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(horaMilitar 
    main.cpp
    
    hora24.cpp
    hora24.h

    horaMilitar.cpp
    horaMilitar.h

    tipoHora.h

    companiaHoraria.cpp
    companiaHoraria.h

    horaEstandar.cpp
    horaEstandar.h
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

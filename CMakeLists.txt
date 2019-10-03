cmake_minimum_required(VERSION 3.14)
project(lab_7_composicion)

set(SOURCE_FILES main.cpp Rueda.cpp Rueda.h Motor.h Motor.cpp Propietario.cpp Propietario.h Puerta.cpp Puerta.h
        Ventana.cpp Ventana.h )

add_executable(Composicion ${SOURCE_FILES})
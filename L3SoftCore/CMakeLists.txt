# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(L3SoftCore)

target_include_directories(app PRIVATE
    ${PROJECT_SOURCE_DIR}/PurpleCPUCommunication
    ${PROJECT_SOURCE_DIR}/Logger
)

target_sources(app PRIVATE
    src/main.cpp
    PurpleCPUCommunication/PurpleCPUCommunication.cpp
    Logger/Logger.cpp
)
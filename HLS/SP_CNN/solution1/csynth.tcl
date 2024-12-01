############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
## Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
############################################################
open_project SP_CNN
set_top cnn
add_files activation.cc
add_files activation.h
add_files cnn.cc
add_files cnn.h
add_files conv.cc
add_files conv.h
add_files ../Headers/conv_weights.cc
add_files ../Headers/definitions.h
add_files dense.cc
add_files dense.h
add_files ../Headers/dense_weights.cc
add_files flatten.cc
add_files flatten.h
add_files pool.cc
add_files pool.h
add_files utils.cc
add_files utils.h
add_files -tb ../Data/in.dat -cflags "-Wno-unknown-pragmas"
add_files -tb ../Data/in2.dat -cflags "-Wno-unknown-pragmas"
add_files -tb main.cc -cflags "-Wno-unknown-pragmas"
add_files -tb ../Data/out.dat -cflags "-Wno-unknown-pragmas"
open_solution "solution1" -flow_target vivado
set_part {xczu3eg-sbva484-2-i}
create_clock -period 10 -name default
source "./SP_CNN/solution1/directives.tcl"
csynth_design

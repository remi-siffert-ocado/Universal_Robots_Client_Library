// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// Copyright 2019 FZI Forschungszentrum Informatik
// Created on behalf of Universal Robots A/S
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Felix Exner exner@fzi.de
 * \date    2019-04-10
 *
 */
//----------------------------------------------------------------------

#include "ur_client_library/rtde/data_package.h"

#include <functional>
namespace urcl
{
namespace rtde_interface
{
std::unordered_map<std::string, DataPackage::_rtde_type_variant> DataPackage::g_type_list{
  { "timestamp", double() },
  { "target_q", vector6d_t() },
  { "target_qd", vector6d_t() },
  { "target_qdd", vector6d_t() },
  { "target_current", vector6d_t() },
  { "target_moment", vector6d_t() },
  { "actual_q", vector6d_t() },
  { "actual_qd", vector6d_t() },
  { "actual_current", vector6d_t() },
  { "actual_current_window", vector6d_t() },
  { "joint_control_output", vector6d_t() },
  { "actual_TCP_pose", vector6d_t() },
  { "actual_TCP_speed", vector6d_t() },
  { "actual_TCP_force", vector6d_t() },
  { "target_TCP_pose", vector6d_t() },
  { "target_TCP_speed", vector6d_t() },
  { "actual_digital_input_bits", uint64_t() },
  { "joint_temperatures", vector6d_t() },
  { "actual_execution_time", double() },
  { "robot_mode", int32_t() },
  { "joint_mode", vector6int32_t() },
  { "safety_mode", int32_t() },
  { "safety_status", int32_t() },
  { "actual_tool_accelerometer", vector3d_t() },
  { "speed_scaling", double() },
  { "target_speed_fraction", double() },
  { "actual_momentum", double() },
  { "actual_main_voltage", double() },
  { "actual_robot_voltage", double() },
  { "actual_robot_current", double() },
  { "actual_joint_voltage", vector6d_t() },
  { "actual_digital_output_bits", uint64_t() },
  { "runtime_state", uint32_t() },
  { "elbow_position", vector3d_t() },
  { "elbow_velocity", vector3d_t() },
  { "robot_status_bits", uint32_t() },
  { "safety_status_bits", uint32_t() },
  { "analog_io_types", uint32_t() },
  { "standard_analog_input0", double() },
  { "standard_analog_input1", double() },
  { "standard_analog_output0", double() },
  { "standard_analog_output1", double() },
  { "io_current", double() },
  { "euromap67_input_bits", uint32_t() },
  { "euromap67_output_bits", uint32_t() },
  { "euromap67_24V_voltage", double() },
  { "euromap67_24V_current", double() },
  { "tool_mode", uint32_t() },
  { "tool_analog_input_types", uint32_t() },
  { "tool_analog_input0", double() },
  { "tool_analog_input1", double() },
  { "tool_output_voltage", int32_t() },
  { "tool_output_current", double() },
  { "tool_temperature", double() },
  { "tcp_force_scalar", double() },
  { "output_bit_registers0_to_31", uint32_t() },
  { "output_bit_registers32_to_63", uint32_t() },
  { "output_bit_register_0", bool() },
  { "output_bit_register_1", bool() },
  { "output_bit_register_2", bool() },
  { "output_bit_register_3", bool() },
  { "output_bit_register_4", bool() },
  { "output_bit_register_5", bool() },
  { "output_bit_register_6", bool() },
  { "output_bit_register_7", bool() },
  { "output_bit_register_8", bool() },
  { "output_bit_register_9", bool() },
  { "output_bit_register_10", bool() },
  { "output_bit_register_11", bool() },
  { "output_bit_register_12", bool() },
  { "output_bit_register_13", bool() },
  { "output_bit_register_14", bool() },
  { "output_bit_register_15", bool() },
  { "output_bit_register_16", bool() },
  { "output_bit_register_17", bool() },
  { "output_bit_register_18", bool() },
  { "output_bit_register_19", bool() },
  { "output_bit_register_20", bool() },
  { "output_bit_register_21", bool() },
  { "output_bit_register_22", bool() },
  { "output_bit_register_23", bool() },
  { "output_bit_register_24", bool() },
  { "output_bit_register_25", bool() },
  { "output_bit_register_26", bool() },
  { "output_bit_register_27", bool() },
  { "output_bit_register_28", bool() },
  { "output_bit_register_29", bool() },
  { "output_bit_register_30", bool() },
  { "output_bit_register_31", bool() },
  { "output_bit_register_32", bool() },
  { "output_bit_register_33", bool() },
  { "output_bit_register_34", bool() },
  { "output_bit_register_35", bool() },
  { "output_bit_register_36", bool() },
  { "output_bit_register_37", bool() },
  { "output_bit_register_38", bool() },
  { "output_bit_register_39", bool() },
  { "output_bit_register_40", bool() },
  { "output_bit_register_41", bool() },
  { "output_bit_register_42", bool() },
  { "output_bit_register_43", bool() },
  { "output_bit_register_44", bool() },
  { "output_bit_register_45", bool() },
  { "output_bit_register_46", bool() },
  { "output_bit_register_47", bool() },
  { "output_bit_register_48", bool() },
  { "output_bit_register_49", bool() },
  { "output_bit_register_50", bool() },
  { "output_bit_register_51", bool() },
  { "output_bit_register_52", bool() },
  { "output_bit_register_53", bool() },
  { "output_bit_register_54", bool() },
  { "output_bit_register_55", bool() },
  { "output_bit_register_56", bool() },
  { "output_bit_register_57", bool() },
  { "output_bit_register_58", bool() },
  { "output_bit_register_59", bool() },
  { "output_bit_register_60", bool() },
  { "output_bit_register_61", bool() },
  { "output_bit_register_62", bool() },
  { "output_bit_register_63", bool() },
  { "output_bit_register_64", bool() },
  { "output_bit_register_65", bool() },
  { "output_bit_register_66", bool() },
  { "output_bit_register_67", bool() },
  { "output_bit_register_68", bool() },
  { "output_bit_register_69", bool() },
  { "output_bit_register_70", bool() },
  { "output_bit_register_71", bool() },
  { "output_bit_register_72", bool() },
  { "output_bit_register_73", bool() },
  { "output_bit_register_74", bool() },
  { "output_bit_register_75", bool() },
  { "output_bit_register_76", bool() },
  { "output_bit_register_77", bool() },
  { "output_bit_register_78", bool() },
  { "output_bit_register_79", bool() },
  { "output_bit_register_80", bool() },
  { "output_bit_register_81", bool() },
  { "output_bit_register_82", bool() },
  { "output_bit_register_83", bool() },
  { "output_bit_register_84", bool() },
  { "output_bit_register_85", bool() },
  { "output_bit_register_86", bool() },
  { "output_bit_register_87", bool() },
  { "output_bit_register_88", bool() },
  { "output_bit_register_89", bool() },
  { "output_bit_register_90", bool() },
  { "output_bit_register_91", bool() },
  { "output_bit_register_92", bool() },
  { "output_bit_register_93", bool() },
  { "output_bit_register_94", bool() },
  { "output_bit_register_95", bool() },
  { "output_bit_register_96", bool() },
  { "output_bit_register_97", bool() },
  { "output_bit_register_98", bool() },
  { "output_bit_register_99", bool() },
  { "output_bit_register_100", bool() },
  { "output_bit_register_101", bool() },
  { "output_bit_register_102", bool() },
  { "output_bit_register_103", bool() },
  { "output_bit_register_104", bool() },
  { "output_bit_register_105", bool() },
  { "output_bit_register_106", bool() },
  { "output_bit_register_107", bool() },
  { "output_bit_register_108", bool() },
  { "output_bit_register_109", bool() },
  { "output_bit_register_110", bool() },
  { "output_bit_register_111", bool() },
  { "output_bit_register_112", bool() },
  { "output_bit_register_113", bool() },
  { "output_bit_register_114", bool() },
  { "output_bit_register_115", bool() },
  { "output_bit_register_116", bool() },
  { "output_bit_register_117", bool() },
  { "output_bit_register_118", bool() },
  { "output_bit_register_119", bool() },
  { "output_bit_register_120", bool() },
  { "output_bit_register_121", bool() },
  { "output_bit_register_122", bool() },
  { "output_bit_register_123", bool() },
  { "output_bit_register_124", bool() },
  { "output_bit_register_125", bool() },
  { "output_bit_register_126", bool() },
  { "output_bit_register_127", bool() },
  { "output_int_register_0", int32_t() },
  { "output_int_register_1", int32_t() },
  { "output_int_register_2", int32_t() },
  { "output_int_register_3", int32_t() },
  { "output_int_register_4", int32_t() },
  { "output_int_register_5", int32_t() },
  { "output_int_register_6", int32_t() },
  { "output_int_register_7", int32_t() },
  { "output_int_register_8", int32_t() },
  { "output_int_register_9", int32_t() },
  { "output_int_register_10", int32_t() },
  { "output_int_register_11", int32_t() },
  { "output_int_register_12", int32_t() },
  { "output_int_register_13", int32_t() },
  { "output_int_register_14", int32_t() },
  { "output_int_register_15", int32_t() },
  { "output_int_register_16", int32_t() },
  { "output_int_register_17", int32_t() },
  { "output_int_register_18", int32_t() },
  { "output_int_register_19", int32_t() },
  { "output_int_register_20", int32_t() },
  { "output_int_register_21", int32_t() },
  { "output_int_register_22", int32_t() },
  { "output_int_register_23", int32_t() },
  { "output_int_register_24", int32_t() },
  { "output_int_register_25", int32_t() },
  { "output_int_register_26", int32_t() },
  { "output_int_register_27", int32_t() },
  { "output_int_register_28", int32_t() },
  { "output_int_register_29", int32_t() },
  { "output_int_register_30", int32_t() },
  { "output_int_register_31", int32_t() },
  { "output_int_register_32", int32_t() },
  { "output_int_register_33", int32_t() },
  { "output_int_register_34", int32_t() },
  { "output_int_register_35", int32_t() },
  { "output_int_register_36", int32_t() },
  { "output_int_register_37", int32_t() },
  { "output_int_register_38", int32_t() },
  { "output_int_register_39", int32_t() },
  { "output_int_register_40", int32_t() },
  { "output_int_register_41", int32_t() },
  { "output_int_register_42", int32_t() },
  { "output_int_register_43", int32_t() },
  { "output_int_register_44", int32_t() },
  { "output_int_register_45", int32_t() },
  { "output_int_register_46", int32_t() },
  { "output_int_register_47", int32_t() },
  { "output_double_register_0", double() },
  { "output_double_register_1", double() },
  { "output_double_register_2", double() },
  { "output_double_register_3", double() },
  { "output_double_register_4", double() },
  { "output_double_register_5", double() },
  { "output_double_register_6", double() },
  { "output_double_register_7", double() },
  { "output_double_register_8", double() },
  { "output_double_register_9", double() },
  { "output_double_register_10", double() },
  { "output_double_register_11", double() },
  { "output_double_register_12", double() },
  { "output_double_register_13", double() },
  { "output_double_register_14", double() },
  { "output_double_register_15", double() },
  { "output_double_register_16", double() },
  { "output_double_register_17", double() },
  { "output_double_register_18", double() },
  { "output_double_register_19", double() },
  { "output_double_register_20", double() },
  { "output_double_register_21", double() },
  { "output_double_register_22", double() },
  { "output_double_register_23", double() },
  { "output_double_register_24", double() },
  { "output_double_register_25", double() },
  { "output_double_register_26", double() },
  { "output_double_register_27", double() },
  { "output_double_register_28", double() },
  { "output_double_register_29", double() },
  { "output_double_register_30", double() },
  { "output_double_register_31", double() },
  { "output_double_register_32", double() },
  { "output_double_register_33", double() },
  { "output_double_register_34", double() },
  { "output_double_register_35", double() },
  { "output_double_register_36", double() },
  { "output_double_register_37", double() },
  { "output_double_register_38", double() },
  { "output_double_register_39", double() },
  { "output_double_register_40", double() },
  { "output_double_register_41", double() },
  { "output_double_register_42", double() },
  { "output_double_register_43", double() },
  { "output_double_register_44", double() },
  { "output_double_register_45", double() },
  { "output_double_register_46", double() },
  { "output_double_register_47", double() },
  { "input_bit_registers0_to_31", uint32_t() },
  { "input_bit_registers32_to_63", uint32_t() },
  { "input_bit_register_0", bool() },
  { "input_bit_register_1", bool() },
  { "input_bit_register_2", bool() },
  { "input_bit_register_3", bool() },
  { "input_bit_register_4", bool() },
  { "input_bit_register_5", bool() },
  { "input_bit_register_6", bool() },
  { "input_bit_register_7", bool() },
  { "input_bit_register_8", bool() },
  { "input_bit_register_9", bool() },
  { "input_bit_register_10", bool() },
  { "input_bit_register_11", bool() },
  { "input_bit_register_12", bool() },
  { "input_bit_register_13", bool() },
  { "input_bit_register_14", bool() },
  { "input_bit_register_15", bool() },
  { "input_bit_register_16", bool() },
  { "input_bit_register_17", bool() },
  { "input_bit_register_18", bool() },
  { "input_bit_register_19", bool() },
  { "input_bit_register_20", bool() },
  { "input_bit_register_21", bool() },
  { "input_bit_register_22", bool() },
  { "input_bit_register_23", bool() },
  { "input_bit_register_24", bool() },
  { "input_bit_register_25", bool() },
  { "input_bit_register_26", bool() },
  { "input_bit_register_27", bool() },
  { "input_bit_register_28", bool() },
  { "input_bit_register_29", bool() },
  { "input_bit_register_30", bool() },
  { "input_bit_register_31", bool() },
  { "input_bit_register_32", bool() },
  { "input_bit_register_33", bool() },
  { "input_bit_register_34", bool() },
  { "input_bit_register_35", bool() },
  { "input_bit_register_36", bool() },
  { "input_bit_register_37", bool() },
  { "input_bit_register_38", bool() },
  { "input_bit_register_39", bool() },
  { "input_bit_register_40", bool() },
  { "input_bit_register_41", bool() },
  { "input_bit_register_42", bool() },
  { "input_bit_register_43", bool() },
  { "input_bit_register_44", bool() },
  { "input_bit_register_45", bool() },
  { "input_bit_register_46", bool() },
  { "input_bit_register_47", bool() },
  { "input_bit_register_48", bool() },
  { "input_bit_register_49", bool() },
  { "input_bit_register_50", bool() },
  { "input_bit_register_51", bool() },
  { "input_bit_register_52", bool() },
  { "input_bit_register_53", bool() },
  { "input_bit_register_54", bool() },
  { "input_bit_register_55", bool() },
  { "input_bit_register_56", bool() },
  { "input_bit_register_57", bool() },
  { "input_bit_register_58", bool() },
  { "input_bit_register_59", bool() },
  { "input_bit_register_60", bool() },
  { "input_bit_register_61", bool() },
  { "input_bit_register_62", bool() },
  { "input_bit_register_63", bool() },
  { "input_bit_register_64", bool() },
  { "input_bit_register_65", bool() },
  { "input_bit_register_66", bool() },
  { "input_bit_register_67", bool() },
  { "input_bit_register_68", bool() },
  { "input_bit_register_69", bool() },
  { "input_bit_register_70", bool() },
  { "input_bit_register_71", bool() },
  { "input_bit_register_72", bool() },
  { "input_bit_register_73", bool() },
  { "input_bit_register_74", bool() },
  { "input_bit_register_75", bool() },
  { "input_bit_register_76", bool() },
  { "input_bit_register_77", bool() },
  { "input_bit_register_78", bool() },
  { "input_bit_register_79", bool() },
  { "input_bit_register_80", bool() },
  { "input_bit_register_81", bool() },
  { "input_bit_register_82", bool() },
  { "input_bit_register_83", bool() },
  { "input_bit_register_84", bool() },
  { "input_bit_register_85", bool() },
  { "input_bit_register_86", bool() },
  { "input_bit_register_87", bool() },
  { "input_bit_register_88", bool() },
  { "input_bit_register_89", bool() },
  { "input_bit_register_90", bool() },
  { "input_bit_register_91", bool() },
  { "input_bit_register_92", bool() },
  { "input_bit_register_93", bool() },
  { "input_bit_register_94", bool() },
  { "input_bit_register_95", bool() },
  { "input_bit_register_96", bool() },
  { "input_bit_register_97", bool() },
  { "input_bit_register_98", bool() },
  { "input_bit_register_99", bool() },
  { "input_bit_register_100", bool() },
  { "input_bit_register_101", bool() },
  { "input_bit_register_102", bool() },
  { "input_bit_register_103", bool() },
  { "input_bit_register_104", bool() },
  { "input_bit_register_105", bool() },
  { "input_bit_register_106", bool() },
  { "input_bit_register_107", bool() },
  { "input_bit_register_108", bool() },
  { "input_bit_register_109", bool() },
  { "input_bit_register_110", bool() },
  { "input_bit_register_111", bool() },
  { "input_bit_register_112", bool() },
  { "input_bit_register_113", bool() },
  { "input_bit_register_114", bool() },
  { "input_bit_register_115", bool() },
  { "input_bit_register_116", bool() },
  { "input_bit_register_117", bool() },
  { "input_bit_register_118", bool() },
  { "input_bit_register_119", bool() },
  { "input_bit_register_120", bool() },
  { "input_bit_register_121", bool() },
  { "input_bit_register_122", bool() },
  { "input_bit_register_123", bool() },
  { "input_bit_register_124", bool() },
  { "input_bit_register_125", bool() },
  { "input_bit_register_126", bool() },
  { "input_bit_register_127", bool() },
  { "input_int_register_0", int32_t() },
  { "input_int_register_1", int32_t() },
  { "input_int_register_2", int32_t() },
  { "input_int_register_3", int32_t() },
  { "input_int_register_4", int32_t() },
  { "input_int_register_5", int32_t() },
  { "input_int_register_6", int32_t() },
  { "input_int_register_7", int32_t() },
  { "input_int_register_8", int32_t() },
  { "input_int_register_9", int32_t() },
  { "input_int_register_10", int32_t() },
  { "input_int_register_11", int32_t() },
  { "input_int_register_12", int32_t() },
  { "input_int_register_13", int32_t() },
  { "input_int_register_14", int32_t() },
  { "input_int_register_15", int32_t() },
  { "input_int_register_16", int32_t() },
  { "input_int_register_17", int32_t() },
  { "input_int_register_18", int32_t() },
  { "input_int_register_19", int32_t() },
  { "input_int_register_20", int32_t() },
  { "input_int_register_21", int32_t() },
  { "input_int_register_22", int32_t() },
  { "input_int_register_23", int32_t() },
  { "input_int_register_24", int32_t() },
  { "input_int_register_25", int32_t() },
  { "input_int_register_26", int32_t() },
  { "input_int_register_27", int32_t() },
  { "input_int_register_28", int32_t() },
  { "input_int_register_29", int32_t() },
  { "input_int_register_30", int32_t() },
  { "input_int_register_31", int32_t() },
  { "input_int_register_32", int32_t() },
  { "input_int_register_33", int32_t() },
  { "input_int_register_34", int32_t() },
  { "input_int_register_35", int32_t() },
  { "input_int_register_36", int32_t() },
  { "input_int_register_37", int32_t() },
  { "input_int_register_38", int32_t() },
  { "input_int_register_39", int32_t() },
  { "input_int_register_40", int32_t() },
  { "input_int_register_41", int32_t() },
  { "input_int_register_42", int32_t() },
  { "input_int_register_43", int32_t() },
  { "input_int_register_44", int32_t() },
  { "input_int_register_45", int32_t() },
  { "input_int_register_46", int32_t() },
  { "input_int_register_47", int32_t() },
  { "input_double_register_0", double() },
  { "input_double_register_1", double() },
  { "input_double_register_2", double() },
  { "input_double_register_3", double() },
  { "input_double_register_4", double() },
  { "input_double_register_5", double() },
  { "input_double_register_6", double() },
  { "input_double_register_7", double() },
  { "input_double_register_8", double() },
  { "input_double_register_9", double() },
  { "input_double_register_10", double() },
  { "input_double_register_11", double() },
  { "input_double_register_12", double() },
  { "input_double_register_13", double() },
  { "input_double_register_14", double() },
  { "input_double_register_15", double() },
  { "input_double_register_16", double() },
  { "input_double_register_17", double() },
  { "input_double_register_18", double() },
  { "input_double_register_19", double() },
  { "input_double_register_20", double() },
  { "input_double_register_21", double() },
  { "input_double_register_22", double() },
  { "input_double_register_23", double() },
  { "input_double_register_24", double() },
  { "input_double_register_25", double() },
  { "input_double_register_26", double() },
  { "input_double_register_27", double() },
  { "input_double_register_28", double() },
  { "input_double_register_29", double() },
  { "input_double_register_30", double() },
  { "input_double_register_31", double() },
  { "input_double_register_32", double() },
  { "input_double_register_33", double() },
  { "input_double_register_34", double() },
  { "input_double_register_35", double() },
  { "input_double_register_36", double() },
  { "input_double_register_37", double() },
  { "input_double_register_38", double() },
  { "input_double_register_39", double() },
  { "input_double_register_40", double() },
  { "input_double_register_41", double() },
  { "input_double_register_42", double() },
  { "input_double_register_43", double() },
  { "input_double_register_44", double() },
  { "input_double_register_45", double() },
  { "input_double_register_46", double() },
  { "input_double_register_47", double() },
  { "speed_slider_mask", uint32_t() },
  { "speed_slider_fraction", double() },
  { "standard_digital_output_mask", uint8_t() },
  { "standard_digital_output", uint8_t() },
  { "configurable_digital_output_mask", uint8_t() },
  { "configurable_digital_output", uint8_t() },
  { "tool_output_mode", uint8_t() },
  { "tool_digital_output0_mode", uint8_t() },
  { "tool_digital_output1_mode", uint8_t() },
  { "tool_digital_output", uint8_t() },
  { "payload", double() },
  { "payload_cog", vector3d_t() },
  { "payload_inertia", vector6d_t() },
  { "script_control_line", uint32_t() },
  { "ft_raw_wrench", vector6d_t() },
  { "joint_position_deviation_ratio", double() },
  { "collision_detection_ratio", double() },
  { "time_scale_source", int32_t() },
  { "standard_analog_output_mask", uint8_t() },
  { "standard_analog_output_type", uint8_t() },
  { "standard_analog_output_0", double() },
  { "standard_analog_output_1", double() },
  { "tcp_offset", vector6d_t() },
};

void rtde_interface::DataPackage::initEmpty()
{
  for (auto& item : recipe_)
  {
    if (g_type_list.find(item) != g_type_list.end())
    {
      _rtde_type_variant entry = g_type_list[item];
      data_[item] = entry;
    }
  }
}

bool rtde_interface::DataPackage::parseWith(comm::BinParser& bp)
{
  if (protocol_version_ == 2)
  {
    bp.parse(recipe_id_);
  }
  for (auto& item : recipe_)
  {
    if (g_type_list.find(item) != g_type_list.end())
    {
      _rtde_type_variant entry = g_type_list[item];
      std::visit([&bp](auto&& arg) { bp.parse(arg); }, entry);
      data_[item] = entry;
    }
    else
    {
      return false;
    }
  }
  return true;
}

std::string rtde_interface::DataPackage::toString() const
{
  std::stringstream ss;
  for (auto& item : data_)
  {
    ss << item.first << ": ";
    std::visit([&ss](auto&& arg) { ss << arg; }, item.second);
    ss << std::endl;
  }
  return ss.str();
}

size_t rtde_interface::DataPackage::serializePackage(uint8_t* buffer)
{
  uint16_t payload_size = sizeof(recipe_id_);

  for (auto& item : data_)
  {
    payload_size += std::visit([](auto&& arg) -> uint16_t { return sizeof(arg); }, item.second);
  }
  size_t size = 0;
  size += PackageHeader::serializeHeader(buffer, PackageType::RTDE_DATA_PACKAGE, payload_size);
  size += comm::PackageSerializer::serialize(buffer + size, recipe_id_);
  for (auto& item : recipe_)
  {
    size += std::visit(
        [&buffer, &size](auto&& arg) -> size_t { return comm::PackageSerializer::serialize(buffer + size, arg); },
        data_[item]);
  }

  return size;
}
}  // namespace rtde_interface
}  // namespace urcl

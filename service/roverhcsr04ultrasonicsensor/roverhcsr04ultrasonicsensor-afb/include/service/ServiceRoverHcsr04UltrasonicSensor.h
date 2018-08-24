/* Copyright 2018 Pedro Cuadra - pjcuadra@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* WARNING: This file is automatically generated by raml2agl */
#ifndef __RAML2AGL_SERVICE_CLASS_SERVICEROVERHCSR04ULTRASONICSENSOR_H_
#define __RAML2AGL_SERVICE_CLASS_SERVICEROVERHCSR04ULTRASONICSENSOR_H_

#pragma once
#include <cstddef>
#include <string.h>
#include <string>

extern "C"
{
    #define AFB_BINDING_VERSION 2
    #include <afb/afb-binding.h>
};

enum rover_button_id {
  user_button,
  shutdown_button,
  custom_button
};
enum rover_sensor_id {
  rear_right,
  rear_left,
  front_right,
  front_left,
  front,
  rear
};

class ServiceRoverHcsr04UltrasonicSensor {
public:
  ServiceRoverHcsr04UltrasonicSensor();

  int init();

    /** Autogenrated doc for check */
    int check(const rover_sensor_id in_sensor_id,
        bool &out_enable);

    /** Autogenrated doc for get_echo_pin */
    int get_echo_pin(const rover_sensor_id in_sensor_id,
        int &out_echo_pin);

    /** Autogenrated doc for get_trig_pin */
    int get_trig_pin(const rover_sensor_id in_sensor_id,
        int &out_trig_pin);

    /** Autogenrated doc for read */
    int read(const rover_sensor_id in_sensor_id,
        double &out_distance);

    /** Autogenrated doc for set_echo_pin */
    int set_echo_pin(const rover_sensor_id in_sensor_id,
        const int in_echo_pin);

    /** Autogenrated doc for set_trig_pin */
    int set_trig_pin(const rover_sensor_id in_sensor_id,
        const int in_trig_pin);

};

#endif //__RAML2AGL_SERVICE_CLASS_SERVICEROVERHCSR04ULTRASONICSENSOR_H_
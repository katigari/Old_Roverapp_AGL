
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <vector>

#include <demo/RoverLightsDemo.h>

RoverLightsDemo::RoverLightsDemo(RoverLights *rvl) {
  this->rvl = rvl;
}

int RoverLightsDemo::run() {
    
  this->rvl->turn_on_lights();
  usleep(500000);
  this->rvl->turning_left_on();
  usleep(500000);
  this->rvl->turning_right_on();
  usleep(500000);
  this->rvl->parking_signal_on();
  usleep(500000);
  this->rvl->turn_off_lights();
  
}

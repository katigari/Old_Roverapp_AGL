
#ifndef _ROVER_LIGHTS_HEADER_
#define _ROVER_LIGHTS_HEADER_

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

#include <app/RoverLights.h>

using namespace std;

class RoverLightsDemo {
public:
  RoverLightsDemo(RoverLights *rvl);

  int run();

private:
  RoverLights * rvl;
};

#endif /* _ROVER_LIGHTS_HEADER_ */

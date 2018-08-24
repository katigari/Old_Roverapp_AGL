
#ifndef _ROVER_LIGHTNING_HEADER_
#define _ROVER_LIGHTNING_HEADER_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>


#include <i2c8Bit.h>

using namespace std;

class RoverLightning {
public:

  	// Constants which define different states of RGB LED's 
  	
  	static const unsigned char lightsOff = 0x00;
	static const unsigned char lightsOn  = 0x3f;
	static const unsigned char leftTurning = 0x03;
	static const unsigned char rightTurning = 0x0c;
	static const unsigned char turningOff = 0x00;
	static const unsigned char parking = 0x08;
	
	i2c8Bit * mcp23017;
	
    RoverLightning();

    // Functions which control state of RGB LED's
    void turnOnLights();
    void turnOffLights();
    void turnOnLeftTurning();
    void turnOnRightTurning();
    void turnOnParking();

private:



};

#endif /* _ROVER_LIGHTNING_HEADER_ */

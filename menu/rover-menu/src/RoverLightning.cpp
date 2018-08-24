#include <iostream>
#include <unistd.h>
#include <RoverLightning.h>
#include <i2c8Bit.h>

RoverLightning::RoverLightning() {
    

    this->mcp23017 = new i2c8Bit();

    // write data value 0b00000000 into register 00 (IODIRA) 
	// and the same for 01(IODIRB)  
    // makes all of GPA and GPB outputs    
    this->mcp23017->writeReg(0b00,0b00000000); 
    this->mcp23017->writeReg(0b01,0b00000000); 

}

void RoverLightning::turnOnLights() {
    mcp23017->writeReg(0x13,RoverLightning::lightsOn);
}

void RoverLightning::turnOffLights() {
    mcp23017->writeReg(0x13,RoverLightning::lightsOff);
}

void RoverLightning::turnOnLeftTurning() {
    mcp23017->writeReg(0x12,RoverLightning::leftTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::leftTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::leftTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
}

void RoverLightning::turnOnRightTurning() {
    mcp23017->writeReg(0x12,RoverLightning::rightTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::rightTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::rightTurning);
    usleep(300000);
    mcp23017->writeReg(0x12,RoverLightning::turningOff);
}

void RoverLightning::turnOnParking() {
    mcp23017->writeReg(0x13,RoverLightning::parking);
}
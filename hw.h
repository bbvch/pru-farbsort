#ifndef HW
#define HW

class Motor;
class Compressor;
class LightBarrier;
class Piston;

struct Hw
{
    Motor &motor;
    Piston &piston0;
    Piston &piston1;
    Piston &piston2;
    LightBarrier &lightBarrier0;
    LightBarrier &lightBarrier1;
    LightBarrier &lightBarrierEmergencyStop;

    Hw(Motor &motor,
       //Compressor &compressor,
        Piston &piston0,
        Piston &piston1,
        Piston &piston2,
        LightBarrier &lightBarrier0,
        LightBarrier &lightBarrier1,
        LightBarrier &lightBarrierEmergencyStop):
            motor(motor),
            piston0(piston0),
            piston1(piston1),
            piston2(piston2),
            lightBarrier0(lightBarrier0),
            lightBarrier1(lightBarrier1),
            lightBarrierEmergencyStop(lightBarrierEmergencyStop) {}

};

#endif // HW

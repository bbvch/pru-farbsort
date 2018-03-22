#include <stdint.h>
#include "motor.h"
#include "msg_definition.h"


Motor::Motor(int mask)
    : Gpo(static_cast<uint32_t>(mask))
{

}

void Motor::stop()
{
    clear();
}

void Motor::start()
{
    set();
}

bool Motor::isRunning()
{
    return getStatus();
}




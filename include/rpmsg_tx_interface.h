#ifndef RPMSG_INTERFACE
#define RPMSG_INTERFACE

#include <stdint.h>

class RpMsgRxInterface;

class RpMsgTxInterface{
    public:

    virtual int16_t post_msg(char const *event, uint16_t length) = 0;
    virtual int16_t post_info(char info) = 0;
    virtual void registerReceiver(RpMsgRxInterface* messageHandler) = 0;
    virtual void setDisconnected() = 0;
};

#endif // RPMSG_INTERFACE


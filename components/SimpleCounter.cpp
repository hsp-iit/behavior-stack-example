/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#include <yarp/os/Network.h>
#include <yarp/os/RpcServer.h>

#include <BatteryReader.h>
#include <yarp/dev/PolyDriver.h>
#include <yarp/dev/IBattery.h>

using namespace yarp::dev;

class SimpleCounter : public Counter
{
public:
    SimpleCounter() = default;
    bool open()
    
        this->yarp().attachAsServer(server_port);
        if (!server_port.open("/Components/SimpleCounter")) {
            yError("Could not open ");
            return false;
        }

        return true;
    }

    void close()
    {
        server_port.close();
    }
    int get_count() override
    {
        yWarning("get_counts called");
        return count;
    }

    void reset_counter() override
    {
        yWarning("reset_counter called");
        count = 0;
    }

private:
    std::atomic<int> count{ 0 };
    yarp::os::RpcServer server_port;
};

int main()
{
    yarp::os::Network yarp;

    SimpleCounter simpleCounter;
    if (!simpleCounter.open()) {
        return 1;
    }

    while (true) {
        yInfo("Server running happily");
        yarp::os::Time::delay(10);
    }

    simpleCounter.close();

    return 0;
}

#include <iostream>

using namespace std;

#include "Cia402device.h"
#include "CiA301CommPort.h"
#include "SocketCanPort.h"

int main()
{

    double posdegree;
    //prepare port. Open a port address with a PortBase Object
    SocketCanPort p1("can0");

    //Create a joint and give a canopen id, and a 301port (by constructor)
    CiA402Device j1(1,&p1);
    printf("aaa\n");
    int usec = 1500*1000;

    j1.SetupPositionMode(360,360);

    printf("bbbb\n");
    posdegree=-25;
    j1.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j1.SetPosition(posdegree);
    usleep(usec);

    printf("bbbb\n");
    posdegree=-25;
    j1.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j1.SetPosition(posdegree);
    usleep(usec);

    printf("bbbb\n");
    posdegree=-25;
    j1.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j1.SetPosition(posdegree);
    usleep(usec);


    ////////////////////////////////////////////
    ///////////////      J2        /////////////
    ////////////////////////////////////////////
    SocketCanPort p2("can0");

    CiA402Device j2(2,&p2);

    j2.SetupPositionMode(360,360);

    printf("bbbb\n");
    posdegree=-25;
    j2.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j2.SetPosition(posdegree);
    usleep(usec);

    printf("bbbb\n");
    posdegree=-25;
    j2.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j2.SetPosition(posdegree);
    usleep(usec);

    printf("bbbb\n");
    posdegree=-25;
    j2.SetPosition(posdegree);
    usleep(usec);

    posdegree=25;
    j2.SetPosition(posdegree);
    usleep(usec);
    return 0;
}


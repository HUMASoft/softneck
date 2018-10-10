

#include <iostream>
#include <math.h>
#include <bitset>

#include "TestPort.h"
#include "CanBusPort.h"
#include "Cia402device.h"
#include "CiA301CommPort.h"
#include "SocketCanPort.h"


using namespace std;

int main(int argc, char *argv[])
{

    ///prepare ports
    /// Open a port address with a PortBase Object
    //TestPort port;
    //CanBusPort port;
    SocketCanPort p1("can0");
    SocketCanPort p2("can0");
     uint16_t status;
    double posdegree_1, posdegree_2;
    ///Then instantiate a 301 communications object for that address
    //CiA301CommPort coms(port.getPortFileDescriptor());

     ///Create a joint and give a canopen id, and a 301port (by constructor)
     CiA402Device j1(1,&p1);
     ///Create a joint and give a canopen id, and a 301port (by constructor)
     CiA402Device j2(2,&p2);

    ///Check the status of the device
   // j1.PrintStatus();

   // j1.Reset();
   // j1.PrintStatus();

   // j1.SwitchOn();
   // j1.PrintStatus();

  int usec = 800*1000;

  j1.SetupPositionMode(360,360);  
  j2.SetupPositionMode(360,360);

  posdegree_2=-0.0; //Write the position in degrees here
  j2.SetPosition(posdegree_2);
  usleep(usec);
  ///new positions here!!
  posdegree_2=-45.0; //Write the position in degrees here
  j2.SetPosition(posdegree_2);
  usleep(usec);
  ///new positions here!!
  ///
  /// posdegree_2=-0.0; //Write the position in degrees here
  j2.SetPosition(posdegree_2);
  usleep(usec);
  ///new positions here!!
  posdegree_2=45.0; //Write the position in degrees here
  j2.SetPosition(posdegree_2);
  usleep(usec);
  ///new positions here!!
//  ///new positions here!!
//  posdegree_1=-30.0; //Write the position in degrees here
//  j1.SetPosition(posdegree_1);



return 0;
  usleep(usec);

  posdegree_1=0.0; //Write the position in degrees here
  j1.SetPosition(posdegree_1);

  usleep(usec);

  posdegree_1=45.0; //Write the position in degrees here
  j1.SetPosition(posdegree_1);

  usleep(usec);

      posdegree_2=0.0; //Write the position in degrees here
      j2.SetPosition(posdegree_2);

      usleep(usec);

      posdegree_2=45.0; //Write the position in degrees here
      j2.SetPosition(posdegree_2);

  usleep(usec);

  posdegree_1=0.0; //Write the position in degrees here
  j1.SetPosition(posdegree_1);

  usleep(usec);

  posdegree_1=-45.0; //Write the position in degrees here
  j1.SetPosition(posdegree_1);
  usleep(usec);

  posdegree_1=0.0; //Write the position in degrees here
  j1.SetPosition(posdegree_1);

  posdegree_2=0.0; //Write the position in degrees here
  j2.SetPosition(posdegree_2);

//  while(posdegree_1<30.0)
//  {
//      ///new positions here!!
//      posdegree_1+=1; //Write the position in degrees here
//      j1.SetPosition(posdegree_1);
//     // usleep(500*1000);

//      cout<<"////////POS////// ---> "<<posdegree_1<<endl;
//  }
//  while(posdegree_2<30)
//  {
//      ///new positions here!!
//      posdegree_2=-30.0; //Write the position in degrees here
//      j2.SetPosition(posdegree_2);

//      cout<<"////////POS////// ---> "<<posdegree_2<<endl;
//  }


//   j1.FlushBuffer();
//   //sleep(2);
//   j1.PrintStatus();

//std::cout << x;

return 0;

}

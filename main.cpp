#include <iostream>
#include <commands.h>
#include <stdio.h>
#include<string.h>
#include <cstdlib>
#include <QByteArray>

using namespace std;
#include <string.h>

typedef unsigned short  int U_bit16 ;
typedef  int UINT32 ;
typedef short int UINT16 ;
typedef char* U_bit128 ;
typedef char UINT8;

//U_bit16 header=8765;
//U_bit32 command_id= CONNECT_COMMAND;
//U_bit8 con_discon=1;
U_bit128 mssg="hello friends chai peelo";
//    U_bit128 buffer;

UINT8* buffer;


void packetize(UINT8* sendBuffer, UINT32 cmdId, UINT8* data){
    int offset=0;

    UINT16 header= 0x8765;
    UINT16 footer= 0x4321;
    UINT32 u32CmdId= cmdId;

//    char *tmp= (char*)&header;
//    memcpy(&sendBuffer[offset, tmp, 2);

    cout<<sendBuffer;
}

int main()
{
// char *name="hello";
// char *str="world";
// char *c;
//c=(char*)malloc(11*sizeof (char));

//memcpy(c,name,5);

//memcpy(c+strlen(name),str,5);
//  printf("%s",c);
//    return 0;


    UINT32 cmdId= CONNECT_COMMAND;
    buffer=(char*)malloc(100*sizeof (char));
int a=123456;
string name=to_string(a);
//const char* nchar=name.c_str;
cout<<name;
    UINT8*data;

    QByteArray tmp;
    tmp[0]= 0;
    memcpy(data, tmp.data(),1);
    packetize(buffer, cmdId, data);

// memcpy(buffer,name,35);
//    //memcpy(buffer+4)
//  printf("%s",buffer);

};

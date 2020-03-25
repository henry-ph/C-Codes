#ifndef EXP5_CLIENT_H
#define EXP5_ClIENT_H
#include<iostream>

class Client {
public:
    static void ChangeServerName(std::string x);
    static std::string serverName;
    static int clientNum;
};

#endif
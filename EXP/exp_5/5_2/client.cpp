#include"client.h"
#include<iostream>

std::string Client::serverName = "firstServer";
int Client::clientNum = 0;
void Client::ChangeServerName(std::string x) {
    serverName = x;
}
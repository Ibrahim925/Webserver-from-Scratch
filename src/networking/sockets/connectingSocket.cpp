#include "Webserver/Sockets/ConnectingSocket.hpp"

// Constructor
IKB::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interface) : 
	Socket(domain, service, protocol, port, interface) {}


// Definition of connect_to_network for binding
void IKB::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
	connection = connect(sock, (struct sockaddr*)&address, sizeof(address));
}


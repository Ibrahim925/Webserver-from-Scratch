#include "Networking/Sockets/BindingSocket.hpp"

// Constructor
IKB::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : 
	Socket(domain, service, protocol, port, interface)
{
	connect_to_network(get_sock(), get_address());
}


// Definition of connect_to_network for binding
void IKB::BindingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
	binding = bind(sock, (struct sockaddr*)&address, sizeof(address));
}



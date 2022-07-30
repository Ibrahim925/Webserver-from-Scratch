#include "ConnectingSocket.hpp"

// Constructor
IKB::ConnectingSocket::ConnectingSocket(int domain, int service, int protocol, int port, u_long interface) : Socket(domain, service, protocol, port, interface) {
	// Establish connection and test it
    set_connection(connect_to_network(get_sock(), get_address()));
	test_connection(get_connection());
}


// Definition of connect_to_network for binding
int IKB::ConnectingSocket::connect_to_network(int sock, struct sockaddr_in address)
{
	return connect(sock, (struct sockaddr*)&address, sizeof(address));
}


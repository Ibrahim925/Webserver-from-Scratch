#include "Socket.hpp"

// Default constructor
IKB::Socket::Socket(int domain, int service, int protocol, int port, u_long interface)
{
	// Set up address structure
	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(interface);

	// Create socket
	sock = socket(domain, service, protocol);
	test_connection(sock);
}

// Test connection
void IKB::Socket::test_connection (int item_to_test) 
{
	// Confirm that the socket/binding to network connection were succcessful
	if (item_to_test < 0)
	{
		perror("FAILED TO CONNECT");
		exit(EXIT_FAILURE);
	}
}

// Getters
struct sockaddr_in IKB::Socket::get_address()
{
	return address;
}

int IKB::Socket::get_connection()
{
	return connection;
}

int IKB::Socket::get_sock()
{
	return sock;
}

// Setters
void IKB::Socket::set_connection(int con)
{
	connection = con;
}

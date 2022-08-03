#include "Networking/Server/Server.hpp"

IKB::Server::Server(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
	socket = new ListeningSocket(domain, service, protocol, port, interface, bklg);
}

// Getters
IKB::ListeningSocket* IKB::Server::get_socket()
{
	return socket;
}

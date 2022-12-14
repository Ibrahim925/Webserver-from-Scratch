#include "Networking/Sockets/ListeningSocket.hpp"

IKB::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklog) : 
	BindingSocket(domain, service, protocol, port, interface)
{
	backlog = bklog;
	start_listening();
	test_connection(listening);
}

void IKB::ListeningSocket::start_listening()
{
	listening = listen(get_sock(), backlog);
}

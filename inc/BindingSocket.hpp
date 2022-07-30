#pragma once

#include <stdio.h>
#include "Socket.hpp"

namespace IKB
{
	class BindingSocket : public Socket
	{
		public:
			// Constructor
			BindingSocket(int domain, int service, int protocol, int port, u_long interface);
			// Virtual method from parent class
			int connect_to_network(int sock, struct sockaddr_in address);
	};
}

#pragma once

#include <stdio.h>
#include "Socket.hpp"

namespace IKB
{
	class ConnectingSocket : public Socket
	{
		private:
			int connection;

		public:
			// Constructor
			ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
			// Virtual method from parent class
			void connect_to_network(int sock, struct sockaddr_in address);
	};
}

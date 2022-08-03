#pragma once

#include <stdio.h>
#include "Socket.hpp"

namespace IKB
{
	class BindingSocket : public Socket
	{
		private:
			int binding;

			// Virtual method from parent class
			void connect_to_network(int sock, struct sockaddr_in address);

		public:
			// Constructor
			BindingSocket(int domain, int service, int protocol, int port, u_long interface);
	};
}

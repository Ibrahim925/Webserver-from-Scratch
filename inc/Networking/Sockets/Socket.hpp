#pragma once

#include <stdio.h>
#include <sys/socket.h>
#include <iostream>
#include <netinet/in.h>

namespace IKB
{
	class Socket
	{
		private:
			// Socket info
			struct sockaddr_in address;
			int sock;
		public:
			// Constructor
			Socket(int domain, int service, int protocol, int port, u_long interface);

			// Virtual method that connects (binds) to network
			virtual void connect_to_network(int sock, struct sockaddr_in address) = 0;

			// Tests connection 
			void test_connection(int item_to_test);

			// Getters
			struct sockaddr_in get_address();
			int get_sock();
	};
}

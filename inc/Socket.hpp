#pragma once

#include <stdio.h>
#include <sys/socket.h>
#include <iostream>

namespace IKB
{
	class Socket
	{
		private:
			// Socket info
			struct sockaddr_in address;
			int sock;
			int connection;
		public:
			// Constructor
			Socket(int domain, int service, int protocol, int port, u_long interaface);

			// Virtual method that connects (binds) to network
			virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;

			// Tests connection 
			void test_connection(int item_to_test);

			// Getters
			struct sockaddr_in get_address();
			int get_sock();
			int get_connection();
	};
}

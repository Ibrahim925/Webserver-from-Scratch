#pragma once
#include "Networking/Sockets/ListeningSocket.hpp"
#include "unistd.h"

namespace IKB
{
	class Server
	{
		private:
			ListeningSocket* socket;
			virtual void listener() = 0;
			virtual void handler() = 0;
			virtual void responder() = 0;

		public:
			Server(int domain, int service, int protocol, int port, u_long interface, int bklg);
			virtual void launch() = 0;

			// Getters
			ListeningSocket* get_socket();
	};
}

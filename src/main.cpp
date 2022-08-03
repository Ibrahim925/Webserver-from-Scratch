#include "Networking/Sockets/BindingSocket.hpp"
#include "Networking/Sockets/ListeningSocket.hpp"
#include "Networking/Server/Server.hpp"

class TestServer : public IKB::Server
{
private:
    char buffer[30000] = {0};
    int new_socket;

    void listener()
    {
        struct sockaddr_in address = get_socket()->get_address();
        int addrlen = sizeof(address);
        new_socket = accept(get_socket()->get_sock(), (struct sockaddr *)&address, (socklen_t *)&addrlen);
        read(new_socket, buffer, 30000);
    }

    void handler()
    {
        std::cout << buffer << std::endl;
    }

    void responder()
    {
        char *hello = "Hello, world!";
        write(new_socket, hello, strlen(hello));
        close(new_socket);
    }

public:
    TestServer() : Server(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10)
    {
        launch();
    }

    void launch()
    {
        while (1)
        {
            std::cout << "========WATING=========" << std::endl;
            listener();
            handler();
            responder();
            std::cout << "========DONE=========" << std::endl;
        }
    }
};

int main()
{
    TestServer server;
}

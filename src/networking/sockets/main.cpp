#include "IKB.hpp"

int main()
{
	std::cout << "Starting...\n";
	std::cout << "Binding socket...\n";
	IKB::BindingSocket bs(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);
	std::cout << "Listening socket...\n";
	IKB::ListeningSocket ls(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY, 10);
	std::cout << "Success!!!\n";
}

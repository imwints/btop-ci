#include <iostream>
#include <string>

#include <sys/sysctl.h>

int main() {
	char buffer[1024];
	std::size_t size = sizeof buffer;
	sysctlbyname("machdep.cpu.brand_string", &buffer, &size, nullptr, 0);
	std::cout << std::string { buffer } << '\n';
}

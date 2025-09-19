

#include <iostream>
#include "cloud sdk/includes.h"
extern "C" {
	void __reset_registers();
	void __exit_and_clear();
	void __destroy_peb_base();
}
int main()
{
	start_sigs();
	rape_ida();

	__reset_registers();

	__destroy_peb_base();

	__exit_and_clear();
	c_console console;
	console.init();
	console.clear();

	system("pause > nul");
}


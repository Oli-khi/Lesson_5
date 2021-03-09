
namespace Lesson5 {
	#include <stdarg.h>

	void SwitchValue(int size, ...) {
		int element;
		va_list arr;
		va_start(arr, size);
		for (int i = 0; i < size; i++) {
			element = -(va_arg(arr, int) - 1);			
			std::cout << element << '\t';
		}
		va_end(arr);	
		std::cout << std::endl;
	}
}
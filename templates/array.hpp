#ifndef ARRAY_HPP
#define ARRAY_HPP

template<int Size, typename Type>
class array {
private:
	Type list[Size];
public:
	Type& at(int i) {
		if (i < 0 || i >= Size) {
			// Throw an exception
		}

		return this->list[i];
	}
};

#endif

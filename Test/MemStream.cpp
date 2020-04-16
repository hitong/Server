#include "MemStream.h"

void OutputMemStream::write(const void* data, uint32_t byteSize)
{
	if (byteSize + _pos > _chche_size) {
		realloc(std::max(byteSize + _chche_size, _chche_size * 2));
	}

	memcpy(_chche + _pos, data, byteSize);
	_pos += byteSize;
};

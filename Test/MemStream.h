#pragma once
#include <iostream>
#include <algorithm>

class MemStream
{
public:
	virtual void Serialize(const void* data, uint32_t byteSize) = 0;
	virtual bool isInStream() = 0;
	virtual char* get() = 0;
};

class InputMemStream :public MemStream
{
public:
	void Serialize(const void* data, uint32_t byteSize) {};
	bool isInStream() { return true; };
private:
	

	uint8_t* _chche;
	uint32_t _chche_size;
	uint32_t _pos;
};

class OutputMemStream :public MemStream
{
public:
	virtual void Serialize(const void* data, uint32_t byteSize) { write(data, byteSize); };
	virtual bool isInStream() { return false; };
	void write(const void* data, uint32_t byteSize) ;
	virtual char* get() {
		return _chche;
	}
private:
	void realloc(uint32_t size) {
		char* newPath = new char[size];
		memcpy(newPath,_chche, _pos);
		delete [] _chche;
		_chche_size = size;
		_chche = newPath;
	};
	char* _chche = new char[4]{ 0 };
	uint32_t _chche_size = 4;
	uint32_t _pos = 0;
};


//uint32_t Read(void* dst,void* src,uint32_t size) {
//	memcpy(dst,src,size);
//}
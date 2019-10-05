#pragma once
#include<assert.h>
#include <iostream>
class MyString
{
public:
	char* str;
	unsigned int lengthStr;
	MyString() 
	{
		str = nullptr;
		lengthStr = 0;
	}

	MyString(const char* myString)
	{
		assert(myString);
		lengthStr = strlen(myString);
		str = new char[lengthStr];
		strcpy(str, myString);

	}
	
	MyString(const MyString& copy)
	{
		lengthStr = copy.lengthStr;
		str = new char[lengthStr];
		strcpy(str, copy.str);

	}

	MyString operator+(const MyString &second) const
	{
		MyString *newString = new MyString;
		newString->lengthStr = length() + second.length();
		
		newString->str = new char[newString->lengthStr];

		strcpy(newString->str, str);
		strcpy(newString->str + lengthStr, second.str);

		return *newString;

	}

	MyString operator=(const MyString &equal)
	{
		if(this != &equal)
		{
			lengthStr = equal.lengthStr;
			str = equal.str;
			strcpy(str, equal.str);
		
		}

		return *this;
	}

	bool operator==(const char* myString)
	{
		if(lengthStr != strlen(myString))
		{
			return false;
		}
		
		

		return strcmp(str,myString);
	}

	bool operator!=(const char* myString)
	{
		return !operator==(myString);
	}

	char operator[](const unsigned int index)
	{
		return *(str + index);
	}

	bool strcmp(const char* first, const char* second) const
	{
		int Count = -1;

		for(;*first == *second;	first++,second++)
		{
			++Count;
		}
		return Count == lengthStr;
	}

	unsigned int strlen(const char* pString) const
	{
		assert(pString);

		unsigned int Count = 0;

		while(*pString++)
		{
			++Count;
		}

		return Count;
	}

	void strcpy(char* pDestString, const char *pOrigString) const
	{
		while ((*(pDestString++) = *(pOrigString++)))
		{
			std::cout << "hi" << std::endl;
		}
	}

	void clear()
	{
		for(;*(str)!= '\0';str++)
		{
			*str = '\0';
		}
		lengthStr = 0;
	}

	unsigned int length() const
	{
		return lengthStr;
	}

	~MyString()
	{
		if (str != nullptr)
		{
			delete[] str;
			str = nullptr;
		}
	}

};


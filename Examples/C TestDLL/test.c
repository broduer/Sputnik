#include <stddef.h>
#include <windows.h>
#include <ctype.h>
#include <memory.h>
#include <stdlib.h>
#define DLL_EXPORT __declspec(dllexport)

DLL_EXPORT char* ReturnString ()
{
	return "Hello from DLL";
}

DLL_EXPORT char* ReturnStringPTR ()
{
	char* newStr = (char*)malloc(200);
	memset(newStr, '\0', 200);
	strcpy (newStr,"New string");
	strcat (newStr," - Hello");
	return newStr;
}

DLL_EXPORT void SendBool (char x)
{
	printf("Got: %s\n", x ? "true" : "false");
}

DLL_EXPORT void SendChar (char x)
{
	printf("Got: %c\n", x);
}

DLL_EXPORT void SendByte (char x)
{
	printf("Got: %d\n", x);
}

DLL_EXPORT void SendSByte (unsigned char x)
{
	printf("Got: %u\n", x);
}

DLL_EXPORT void SendInt16 (short x)
{
	printf("Got: %d\n", x);
}

DLL_EXPORT void SendInt32 (int x)
{
	printf("Got: %d\n", x);
}

DLL_EXPORT void SendInt64 (int64_t x)
{
	printf("Got: %I64d\n", x);
}

DLL_EXPORT void SendUInt16 (uint16_t x)
{
	printf("Got: %u\n", x);
}

DLL_EXPORT void SendUInt32 (uint32_t x)
{
	printf("Got: %u\n", x);
}

DLL_EXPORT void SendUInt64 (uint64_t x)
{
	printf("Got: %llu\n", x);
}

DLL_EXPORT void SendFloat (float x)
{
	printf("Got: %g\n", x);
}

DLL_EXPORT void SendDouble (double x)
{
	printf("Got: %g\n", x);
}

DLL_EXPORT void SendString (char* x)
{
	printf("Got: %s\n", x);
}

DLL_EXPORT void SendStringPTR (char* x)
{
	printf("Got as PTR: %s\n", x);
	
	for(int i = 0; i < strlen(x); i++)
	{
		x[i] = toupper(x[i]);
	}
}


DLL_EXPORT void SendStringArray (char* x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %s\n", i, x[i]);
	}
}

DLL_EXPORT void SendBoolArray (char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %s\n", i, x[i] ? "true" : "false");
	}
}

DLL_EXPORT void SendCharArray (char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %c\n", i, x[i]);
	}
}

DLL_EXPORT void SendByteArray (char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %d\n", i, x[i]);
	}
}

DLL_EXPORT void SendSByteArray (unsigned char x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %u\n", i, x[i]);
	}
}

DLL_EXPORT void SendInt16Array (short x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %d\n", i, x[i]);
	}
}

DLL_EXPORT void SendInt32Array (int x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %d\n", i, x[i]);
	}
}

DLL_EXPORT void SendInt64Array (int64_t x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %I64d\n", i, x[i]);
	}
}

DLL_EXPORT void SendUInt16Array (uint16_t x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %u\n", i, x[i]);
	}
}

DLL_EXPORT void SendUInt32Array (uint32_t x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %u\n", i, x[i]);
	}
}

DLL_EXPORT void SendUInt64Array (uint64_t x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %llu\n", i, x[i]);
	}
}

DLL_EXPORT void SendFloatArray (float x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %g\n", i, x[i]);
	}
}

DLL_EXPORT void SendDoubleArray (double x[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Array index [%d] : %g\n", i, x[i]);
	}
}

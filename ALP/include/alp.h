#ifndef ALP_ALP_H
#define ALP_ALP_H

#include "platform.h"

DLL_EXPORT size_t ALPCompressFloats(float* floats, std::size_t count, void* out);
DLL_EXPORT void ALPDecompressFloats(void* in, std::size_t count, float* floats);

#endif // ALP_ALP_H

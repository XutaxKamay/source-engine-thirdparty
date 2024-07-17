#include "alp.hpp"
#include "alp.h"

DLL_EXPORT size_t ALPCompressFloats(float* floats, size_t count, void* out) {
	alp::AlpCompressor<float> compressor;
	compressor.compress(floats, count, (uint8_t*)out);

	return compressor.get_size();
}

DLL_EXPORT void ALPDecompressFloats(void* in, size_t count, float* floats) {
	alp::AlpDecompressor<float> decompressor;
	decompressor.decompress((uint8_t*)in, count, floats);
}
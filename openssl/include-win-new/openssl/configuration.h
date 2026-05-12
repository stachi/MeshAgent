#if defined(_M_ARM64)
# include <openssl/configuration-vc-win64-arm.h>
#elif defined(_M_X64) || defined(_M_AMD64)
# include <openssl/configuration-vc-win64a.h>
#elif defined(_M_IX86)
# include <openssl/configuration-vc-win32.h>
#else
# error Unsupported OpenSSL target architecture
#endif

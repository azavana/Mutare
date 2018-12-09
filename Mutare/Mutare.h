/* Andry RAFAM ANDRIANJAFY - December 2018

Mutare prototype function */

#ifndef _Mutare_h
#define _Mutare_h

#include <cstdint>

typedef unsigned char uchar;
typedef unsigned short ushort;

	
class Mutare
{
	public:
		void Blowfish_Init (uchar *key, int keybytes);
		void Blowfish_Encipher (uint32_t *L, uint32_t *R);
		void RC4plus_Encrypt (uchar *plaintext, uchar *RC4plus_key, uchar *ciphertext);
		void *crack_text (uchar *text, uint32_t *Left, uint32_t *Right, int text_len);		
		uchar *Blowfish_key();
		uchar *RC4plus_key();
		
	protected:
		uint32_t F (uint32_t x);
		void KSA (uchar *key, uchar *S);
		void PRGA_RC4plus (uchar *S, uchar *plaintext, uchar *ciphertext);
			
};

#endif

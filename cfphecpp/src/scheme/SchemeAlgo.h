#ifndef SCHEME_SCHEMEALGO_H_
#define SCHEME_SCHEMEALGO_H_

#include "Cipher.h"
#include "Scheme.h"

#include "../utils/CKsi.h"
#include "../utils/TimeUtils.h"

class SchemeAlgo {
public:
	Scheme& scheme;

	SchemeAlgo(Scheme& scheme) : scheme(scheme) {};
	void powerOf2(vector<Cipher>& c2k, Cipher& c, const long& deg);
	void prod2(vector<vector<Cipher>>& cs2k, vector<Cipher>& cs, const long& deg);

	void inverse(vector<Cipher>& c2k, vector<Cipher>& v2k, Cipher& c, const long& k);
	void exp(Cipher& res, Cipher& c, const long& deg);
	void sigmoid(Cipher& res, Cipher& c, const long& deg);

	vector<Cipher> fftRaw(vector<Cipher>& ciphers, const bool& isForward);
	vector<Cipher> fft(vector<Cipher>& ciphers);
	vector<Cipher> fftInv(vector<Cipher>& ciphers);

};

#endif /* SCHEME_SCHEMEALGO_H_ */

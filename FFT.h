#ifndef _FFT_H
#define _FFT_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
# include <WProgram.h>
#endif

#define N_WAVE      1024    // full length of Sinewave[]
#define LOG2_N_WAVE 10      // log2(N_WAVE)

class FFT {
	private:
		// Private functions and variables here
	public:
		static void convert(short fr[], short fi[], short m);
		static short vector(short fr, short fi);
};

#endif
